#include <stdio.h>

int mod(int x, int y) {
  if(x < y) return x;
  return mod(x - y, y);
}

void main() {
  int x, y;
  scanf("%d%d", &x, &y);
  printf("O resto da divisao de x por y eh: %d\n", mod(x, y));
}
