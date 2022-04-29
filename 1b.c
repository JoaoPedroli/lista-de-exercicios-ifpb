#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite o 1º numero: ");
  scanf("%d", &a);
  printf("Digite o 2º numero: ");
  scanf("%d", &b);
  printf("Digite o 3º numero: ");
  scanf("%d", &c);

  float soma = a + b + c;
  float media = soma / 3;

  printf("A media aritmetica eh: %.1f\n", media);

  return 0;
}
