#include <stdio.h>

int ns[12], x;

int f(int n) {
  if(n == 10) return 0; // fim - caso base

  /*
    verifica se o valor atual eh igual a X,
    recebendo assim um valor booleano (1 ou 0),
    e soma ele com o valor retornado do subproblema(s),
    que consequentemente utilizarao a mesma logica
  */
  return (ns[n] == x) + f(n+1);
}

void main() {
  // le os valores do vetor
  for(int i = 0; i < 10; ++i) {
    scanf("%d", &ns[i]);
  }
  
  int n;
  printf("Digite o valor de N e X: ");
  scanf("%d%d", &n, &x);
  printf("%d aparece %d vezes no vetor a partir da posicao %d\n", x, f(n-1), n);
}
