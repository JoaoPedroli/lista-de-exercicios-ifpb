#include <stdio.h>

int pot(int base, int expoente) {
  if(expoente == 0) return 1;
  if(expoente == 1) return base;
  return base * pot(base, expoente-1);
}

void main() {
  int base, expoente;
  scanf("%d%d", &base, &expoente);
  printf("Valor da potenciacao: %d\n", pot(base, expoente));
}
