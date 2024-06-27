<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
</head>
<body>
  <h1>Jogo da Velha em C</h1>
  
  <p>Este é um simples jogo da velha implementado em C. O programa permite que dois jogadores joguem entre si, mostra o tabuleiro, verifica vitórias e empates, mantém um placar e oferece a opção de reiniciar ou sair do jogo.</p>
  
  <h2>Funcionalidades Principais:</h2>
  <ul>
    <li>
      <strong>Tabuleiro e Coordenadas:</strong>
      <ul>
        <li>Mostra as coordenadas possíveis para os jogadores.</li>
        <li>Exibe o estado atual do tabuleiro durante o jogo.</li>
      </ul>
    </li>
    <li>
      <strong>Jogada e Verificação de Vitória:</strong>
      <ul>
        <li>Permite que os jogadores façam suas jogadas (X para jogador 0 e O para jogador 1).</li>
        <li>Verifica se há uma sequência de três símbolos iguais na horizontal, vertical ou diagonal para determinar um vencedor.</li>
      </ul>
    </li>
    <li>
      <strong>Placar e Finalização do Jogo:</strong>
      <ul>
        <li>Mantém um placar atualizado com o número de vitórias de cada jogador e número de empates.</li>
        <li>Oferece a opção de reiniciar o jogo após cada partida ou sair do programa.</li>
      </ul>
    </li>
  </ul>
  
  <h2>Como Jogar:</h2>
  <ul>
    <li>Execute o programa e siga as instruções no console para colocar as coordenadas desejadas.</li>
    <li>Utilize 'R' para jogar novamente ou 'S' para sair após o final de uma partida.</li>
  </ul>
  
  <h2>Instruções para Compilar e Executar:</h2>
  <p>Para compilar o código, utilize um compilador C compatível (como GCC) com o seguinte comando:</p>
  <code>gcc jogo_da_velha.c -o jogo_da_velha</code>
  <p>Para executar o programa compilado:</p>
  <code>./jogo_da_velha</code>
  
  <h2>Exemplo de Tabuleiro:</h2>
  <pre>
==coordenadas==
 0 0 | 0 1 | 0 2
 1 0 | 1 1 | 1 2
 2 0 | 2 1 | 2 2
===============
 V   V   V
 V   V   V
 V   V   V
  </pre>
  
  <h2>Exemplo de Saída:</h2>
  <pre>
jogador 0, coloque a coordenada: 1 1
 V   V   V
 V   X   V
 V   V   V

jogador 1, coloque a coordenada: 0 0
 O   V   V
 V   X   V
 V   V   V

...

===EMPATE, JOGUEM MELHOR!====

============PLACAR===========
Jogador 0: 1 Jogador 1: 0 Velha: 1
//===========================


Digite R para jogar novamente ou S para sair:
  </pre>
</body>
</html>
