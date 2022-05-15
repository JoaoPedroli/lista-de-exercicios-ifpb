#include <stdio.h>

void main() {
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);
  printf("O valor absoluto de %d eh ", n);
  if(n < 0) printf("%d\n", -n);
  else printf("%d\n", n);
}
