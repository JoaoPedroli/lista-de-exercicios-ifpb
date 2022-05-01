#include <stdio.h>

int f(int a, int b) {
  if(b == 0) return 0;
  return a + f(a, --b);
}

int main() {
  int x, y;
  printf("Digite os valores de X e Y: ");
  scanf("%d%d", &x, &y);
  printf("O valor do produto de X por Y eh: %d\n", f(x, y));

  return 0;
}
