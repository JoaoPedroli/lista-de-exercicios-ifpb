#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ok(i, j) (i >= 0 && j >= 0 && i < 10 && j < 10)

int solve (int tabuleiro[12][12], int linha, int coluna) {
  // se a posicao verificada no momento for valida e ela for uma bomba,
  // tal variavel sera verdadeira, tendo assim o valor 1
  int pos_sup_esq = (ok(linha-1, coluna-1) && tabuleiro[linha-1][coluna-1]);
  int pos_sup_dir = (ok(linha-1, coluna+1) && tabuleiro[linha-1][coluna+1]);
  int pos_inf_esq = (ok(linha+1, coluna-1) && tabuleiro[linha+1][coluna-1]);
  int pos_inf_dir = (ok(linha+1, coluna+1) && tabuleiro[linha+1][coluna+1]);

  int pos_sup = (ok(linha-1, coluna) && tabuleiro[linha-1][coluna]);
  int pos_inf = (ok(linha+1, coluna) && tabuleiro[linha+1][coluna]);
  int pos_esq = (ok(linha, coluna-1) && tabuleiro[linha][coluna-1]);
  int pos_dir = (ok(linha, coluna+1) && tabuleiro[linha][coluna+1]);

  // soma tudo
  return tabuleiro[linha][coluna] +
  pos_sup_esq + pos_sup_dir + pos_inf_esq +
  pos_inf_dir + pos_sup + pos_inf + pos_esq + pos_dir;
}

void main() {
  srand(time(0));
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
  // escondendo 20 bombas em posicoes aleatorias
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

  const int linha = 2, coluna = 3;
  printf("Ha %d bombas ", solve(tabuleiro, linha, coluna));
  printf("ao redor da posicao (%d, %d)\n", linha, coluna);
}
