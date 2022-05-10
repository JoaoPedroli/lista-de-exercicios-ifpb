#include <stdio.h>

void main() {
  int dia_compra, prazo;
  printf("Digite o dia do mes em que o cliente fez a compra: ");
  scanf("%d", &dia_compra);
  printf("Digite o prazo de entrega dado pelo vendedor: ");
  scanf("%d", &prazo);
  int dia_recebimento = ((dia_compra + prazo - 1) % 30) + 1;
  printf("O cliente recebera o produto no dia %d\n", dia_recebimento);
}
