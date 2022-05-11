#include <stdio.h>

void main() {
  char letra;
  printf("Insira a letra em minusculo: ");
  scanf("%c", &letra);
  printf("A letra em maisculo corresponde a: %c", letra - 32);
}
