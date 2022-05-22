/*
  -- HEXADECIMAL --
  INPUT: 30
  OUTPUT: 1E
*/

#include <stdio.h>

void hex(int n) {
  if(n < 1) return;
  hex(n / 16);
  int r = n % 16;
  if(r < 10) printf("%d", r);
  else printf("%c", r+55);
}

void main() {
  int n;
  scanf("%d", &n);
  printf("Valor correspondente em hexadecimal: ");
  hex(n);
  printf("\n");
}
