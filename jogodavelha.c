#include <stdio.h>
//globais
    int linha=0, coluna=0, jogador=0, controlador=9, venceu=0, placar[3]={0};
    char velha[3][3] = {
        {'V', 'V', 'V'},
        {'V', 'V', 'V'},
        {'V', 'V', 'V'}
    };
    
void tabuleiro (){ //mostra as coordenadas possiveis
    printf("==coordenadas==\n 0 0 | 0 1 | 0 2\n 1 0 | 1 1 | 1 2\n 2 0 | 2 1 | 2 2\n===============\n");
}

void print (){ //mostra o tabuleiro
    int i=0, y=0;
    for (i=0;i<3;i++){
        for(y=0;y<3;y++){
            printf(" %c  ", velha[i][y]);
        }
        printf("\n");
    }
}

void limpar (){ //limpa o tabuleiro para uma nova partida
    int i=0, y=0;
    for (i=0;i<3;i++){
        for(y=0;y<3;y++){
            velha[i][y] = 'V';
        }
    }

}

int checar_sequencia(char a, char b, char c) {
    // Verifica se todas as três casa são iguais e não são 'V' (vazio)
    return (a != 'V' && a == b && b == c);
}

void vitoria(){
    for (int i=0;i<3;i++) {
        if (checar_sequencia(velha[i][0], velha[i][1], velha[i][2])){ //condições de vitoria na linha
            controlador = controlador - 10;
            venceu++;
            if (jogador==0){placar[1]++;
                printf("jogador 1 ganhou!\n");}
            else {placar[0]++;
                printf("jogador 0 ganhou!\n");}  
    } //if
        else if (checar_sequencia(velha[0][i], velha[1][i], velha[2][i])){ //condições de vitoria na coluna
            controlador = controlador - 10;
            venceu++;
            if (jogador==0){placar[1]++;
                printf("jogador 1 ganhou!\n");}
            else {placar[0]++;
                printf("jogador 0 ganhou!\n");}  
            } //else if
        
          
    }
     if(checar_sequencia(velha[0][0], velha[1][1], velha[2][2]) || //vitoria por diagonal
        checar_sequencia(velha[0][2], velha[1][1], velha[2][0])) {
            venceu++;
        controlador = controlador - 10;
            if (jogador==0){placar[1]++;
                printf("jogador 1 ganhou!\n");}
            else {placar[0]++;
                printf("jogador 0 ganhou!\n");}  
        }// for
}

void placa (){ //mostra o placar
    printf("\n===========PLACAR===========\n");
    printf("Jogador 0: %d Jogador 1: %d Velha: %d", placar[0],placar[1], placar[2]); 
    printf("\n============================\n");
}
void jogar(){ //executa as ações do jogo com base em qual jogador é

    if (jogador==0){
        velha[linha][coluna] = 'X';
        jogador++;
        controlador--;
    } else {
        velha[linha][coluna] = 'O';
        jogador--;
        controlador--;
    }
    if (controlador<5){
        vitoria();
    }
}


int main (){
    int end = 0;
    char sair;

    tabuleiro();

    for (end=0;end==0;){ //for para controlar quantas vezes o usuario quer jogar
        while (controlador>0){ //executa a pardida
            printf("jogador %d, coloque a coordenada:", jogador);
            scanf("%d %d", &linha,&coluna);  
            
            if (velha[linha][coluna]=='X' || velha[linha][coluna]=='O') {
                printf("COORDENADA JÁ UTILIZADA! JOGUE NOVAMENTE!\n");
            } else if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
                printf("COORDENADA INVÁLIDA! JOGUE NOVAMENTE!\n");
            } else {
            jogar();
            print();}

} //while
    if (controlador==0 && venceu==0){
        printf("\n===EMPATE, JOGUEM MELHOR!===\n");
        placar[2]++;
    }
    placa();
    printf("\nDigite R para jogar novamente ou S para sair:");
    scanf(" %c", &sair);

    switch (sair)
    {
    case 'R': {
        limpar();
        controlador = 9;
        jogador=0;
        venceu=0;
        tabuleiro();
        break;}

    case 'r': {
        limpar();
        controlador = 9;
        jogador = 0;
        venceu=0;
        tabuleiro();
        break;}
    
    default: {
        end++;
        break;}
    }

} //for
    printf("Programa Finalizado\n");
    return 0;
}