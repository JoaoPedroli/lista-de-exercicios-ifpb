#include <stdio.h>

int f(int n) {
  if(!n) return 0;
  return 1 + f(n / 10);
}

void main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", f(n));
}
