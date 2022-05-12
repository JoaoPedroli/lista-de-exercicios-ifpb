#include <stdio.h>

void main() {
  int horas;
  float valor_p_hora;
  printf("Digite a quantidade de horas trabalhadas durante 1 mes: ");
  scanf("%d", &horas);
  printf("Digite o valor de cada hora trabalhada: ");
  scanf("%f", &valor_p_hora);
  const float HORAS_EXTRAS = horas - 160;
  const float V_HORAS_EXTRAS = HORAS_EXTRAS * (valor_p_hora + valor_p_hora * 50 / 100);
  float pagamento = 160 * valor_p_hora + V_HORAS_EXTRAS;
  printf("O pagamento do funcionario sera: R$ %.2f\n", pagamento);
}
