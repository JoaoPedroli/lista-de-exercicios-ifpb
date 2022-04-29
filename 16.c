#include <stdio.h>

int main() {
  char letra;
  printf("Insira a letra em minusculo: ");
  scanf("%c", &letra);
  printf("A letra em maisculo corresponde a: %c", (int)(letra) - 32);

  return 0;
}
