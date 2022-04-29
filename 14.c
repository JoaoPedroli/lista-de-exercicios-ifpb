// jao ped - Qst 14 - Strings

#include <stdio.h>
#include <string.h>

int main() {
  char palavra[100];
  printf("Informe uma palavra: ");
  scanf("%s", palavra);
  printf("O comprimento da palavra eh %d\n", (int)strlen(palavra));

  return 0;
}
