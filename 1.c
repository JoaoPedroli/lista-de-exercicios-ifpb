#include <stdio.h>

int main() {
  int x, sum = 0, i = 1;
  
  for(; i<=3; ++i) {
    printf("Digite o valor do numero %d: ", i);
    scanf("%d", &x);
    sum += x;
  }

  printf("A media aritmetica dos 3 numeros eh: %.2f\n", sum / 3.0);
  
  return 0;
}
