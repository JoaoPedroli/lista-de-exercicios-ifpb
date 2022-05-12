/*

N = 5
OUTPUT:
*****
****
***
**
*

*/

#include <stdio.h>

unsigned int f(int num_ateriscos, int num_casos) {
  if (num_casos == 0) return 0;
  if (num_ateriscos == 0) {
    printf("\n"), --num_casos;
    return f(num_casos, num_casos);
  }
  printf("*");
  return f(num_ateriscos - 1, num_casos);
}

int main() {
  int n;
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  f(n, n);

  return 0;
}
