#include <stdio.h>

void main() {
  int num;
  printf("Digite um numero entre 1 e 999: ");
  scanf("%d", &num);

  printf("Seu valor correspondente em algarismos romanos eh: ");

  const int THIRD_DIGIT = num / 100;
  switch(THIRD_DIGIT) {
    case 0: break;
    case 1: printf("C"); break;
    case 2: printf("CC"); break;
    case 3: printf("CCC"); break;
    case 4: printf("CD"); break;
    case 5: printf("D"); break;
    case 6: printf("DC"); break;
    case 7: printf("DCC"); break;
    case 8: printf("DCCC"); break;
    default: printf("CM"); break;
  }

  const int SECOND_DIGIT = num % 100 / 10;
  switch(SECOND_DIGIT) {
    case 0: break;
    case 1: printf("X"); break;
    case 2: printf("XX"); break;
    case 3: printf("XXX"); break;
    case 4: printf("XL"); break;
    case 5: printf("L"); break;
    case 6: printf("LX"); break;
    case 7: printf("LXX"); break;
    case 8: printf("LXXX"); break;
    default: printf("XC"); break;
  }

  const int FIRST_DIGIT = num % 10;
  switch(FIRST_DIGIT) {
    case 0: break;
    case 1: printf("I"); break;
    case 2: printf("II"); break;
    case 3: printf("III"); break;
    case 4: printf("IV"); break;
    case 5: printf("V"); break;
    case 6: printf("VI"); break;
    case 7: printf("VII"); break;
    case 8: printf("VIII"); break;
    default: printf("IX"); break;
  }

  printf("\n");
}
