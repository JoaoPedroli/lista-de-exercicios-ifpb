#include <stdio.h>

void main() {
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);
  printf("%d eh ", n);
  if(n % 2 == 0) printf("par\n");
  else printf("impar\n");
}
