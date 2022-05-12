/*

N = 5
OUTPUT:
*
**
***
****
*****

*/

#include <stdio.h>

int n;

unsigned int f(int num_ateriscos, int num_casos) {
  // caso o numero de casos ja tenha extrapolado N
  if (num_casos == n + 1) return 0;
  // caso ja tenha chegado ao ultimo asterisco do {num_casos}º caso
  if (num_ateriscos == num_casos) {
    printf("\n");
    return f(0, num_casos + 1);
  }
  printf("*");
  return f(num_ateriscos + 1, num_casos);
}

int main() {
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  f(0, 1);

  return 0;
}
