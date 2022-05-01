#include <stdio.h>

int termo_inicial, razao;

int pa(int n) {
  if(n <= 1) return termo_inicial;
  return razao + pa(--n);
}

int main() {
  int N;
  printf("Digite o valor do termo inicial: ");
  scanf("%d", &termo_inicial);
  printf("Digite o valor da razao: ");
  scanf("%d", &razao);
  printf("Digite o valor de N: ");
  scanf("%d", &N);

  printf("O n-esimo termo da PA eh: %d\n", pa(N));

  return 0;
}
