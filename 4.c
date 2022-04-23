#include <stdio.h>
#include <math.h>

int main() {
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);
  printf("Dobro de %d: %d\n", n, n*2);
  printf("Triplo de %d: %d\n", n, n*3);
  printf("Quadrado de %d: %d\n", n, n*n);
  printf("Cubo de %d: %d\n", n, n*n*n);
  printf("Raiz Quadrada de %d: %.1lf\n", n, sqrt(n));

  return 0;
}
