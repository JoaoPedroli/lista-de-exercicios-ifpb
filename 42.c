#include <stdio.h>

void main() {
  double peso, altura;
  printf("Digite o peso: ");
  scanf("%lf", &peso);
  printf("Digite a altura: ");
  scanf("%lf", &altura);

  double imc = peso / (altura * altura);
  printf("O IMC eh: %.2f\n", imc);
}
