#include <stdio.h>

int main() {
  int x, p, sum = 0, sum_pesos = 0, i = 1;
  
  for(; i<=3; ++i) {
    printf("Digite o valor do numero %d: ", i);
    scanf("%d", &x);
    printf("Digite o peso do numero %d: ", i);
    scanf("%d", &p);
    sum += x * p, sum_pesos += p;
  }

  printf("A media aritmetica dos 3 numeros eh: %.2lf\n", (double)sum / sum_pesos);

  return 0;
}
