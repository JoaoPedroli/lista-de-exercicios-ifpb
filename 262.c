#include <stdio.h>

int div(int x, int y) {
  if(x < y) return 0;
  return 1 + div(x - y, y);
}

void main() {
  int x, y;
  scanf("%d%d", &x, &y);
  printf("O quociente da divisao de x por y eh: %d\n", div(x, y));
}
