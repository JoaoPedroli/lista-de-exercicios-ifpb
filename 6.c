#include <stdio.h>

int main() {
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);  
  printf("Antecessor de %d: %d\nSucessor de %d: %d\n", n, n-1, n, n+1);

  return 0;
}