#include <stdio.h>

void main() {
  int qtd_pessoas;
  printf("Digite o numero de pessoas que vao participar do churrasco: ");
  scanf("%d", &qtd_pessoas);
  float g = qtd_pessoas * 250;
  float kg = g / 1000;
  printf("Devem ser comprados %.2f kg de carne\n", kg);
}
