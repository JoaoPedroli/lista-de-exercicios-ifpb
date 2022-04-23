#include <stdio.h>

int main() {
  double raio;
  printf("Digite o valor do raio: ");
  scanf("%lf", &raio);
  printf("Area da circunferencia: %.2lf\nComprimento da circunferencia: %.2lf\n", 3.14 * (raio * raio), raio * 2);

  return 0;
}
