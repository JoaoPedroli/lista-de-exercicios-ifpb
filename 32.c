#include <stdio.h>

void main() {
  float distancia, preco;
  printf("Digite o valor da distancia que Joao vai percorrer durante uma viagem: ");
  scanf("%f", &distancia);
  printf("Digite o preco atual de um litro de combustivel: ");
  scanf("%f", &preco);

  float total = distancia / 14 * preco;
  printf("Joao devera gastar R$ %.2f com combustivel durante a viagem\n", total);
}
