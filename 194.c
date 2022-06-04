#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  srand(time(0));

  int running = 1;
  while(running) {
    // array booleano (0 ou 1)
    // 1 - Verdadeiro | 0 - Falso
    int tabuleiro[12][12];    

    // inicializacao do tabuleiro
    for(int i = 0; i < 10; ++i) {
      for(int j = 0; j < 10; ++j) {
        tabuleiro[i][j] = 0;
      }
    }

    int i, j, k = 20;
    // escondendo 20 alvos em posicoes aleatorias
    while(k--) {
      /*
        * enquanto a posicao aleatoria gerada estiver
        * preenchida no tabuleiro, gere uma nova posicao aleatoria
      */
      do {
        i = rand() % 10, j = rand() % 10; // gera numeros aleatorios de 0 a 9
      } while(tabuleiro[i][j]);

      // marca a posicao aleatoria gerada como preenchida
      tabuleiro[i][j] = 1;
    }

    int points = 0;

    // lendo a posicao dos tiros
    for(k = 1; k <= 20; ++k) {
      printf("Digite a posicao (i, j) do tiro %d: ", k);
      scanf("%d %d", &i, &j);
      if(tabuleiro[i][j]) {
        printf("Alvo acertado!!\n");
        ++points, tabuleiro[i][j] = 0;
      }
    }

    printf("Sua pontuacao final foi: %d\n", points);
    
    printf("Deseja iniciar uma nova partida?\n1 para Sim\n0 para Nao\n? ");
    scanf("%d", &running);
  }
}
