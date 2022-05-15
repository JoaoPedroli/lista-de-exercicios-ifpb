#include <stdio.h>

void main() {
  int a, b;
  printf("Digite o valor de A e B: ");
  scanf("%d%d", &a, &b);
  if(a > b) printf("A eh maior que B\n");
  else if(a < b) printf("B eh maior que A\n");
  else printf("A eh igual a B\n");
}
