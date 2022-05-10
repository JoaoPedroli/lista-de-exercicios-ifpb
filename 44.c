#include <stdio.h>

void main() {
  int bin1, bin2, bin3, bin4;

  printf("Insira o digito 1 do valor em binario: ");
  scanf("%d", &bin1);
  printf("Insira o digito 2 do valor em binario: ");
  scanf("%d", &bin2);
  printf("Insira o digito 3 do valor em binario: ");
  scanf("%d", &bin3);
  printf("Insira o digito 4 do valor em binario: ");
  scanf("%d", &bin4);
  
  int dec1 = bin4 * 1;
  int dec2 = bin3 * 2;
  int dec3 = bin2 * 4;
  int dec4 = bin1 * 8;
  int dec = dec1 + dec2 + dec3 + dec4;
  
  printf("O valor digitado em decimal equivale a: %d\n", dec);
}
