#include <stdio.h>

void main() {
  char originalEX, newEX, original, new;
  printf("Digite um caractere representando uma das letras da mensagem original: ");
  originalEX = getchar();
  printf("Digite um caractere representando a letra que vai substitui-lo na nova mensagem: ");
  newEX = getchar();
  newEX = getchar();
  printf("Digite um caractere representando outra letra da mensagem original: ");
  original = getchar();
  original = getchar();

  int diff1 = newEX - originalEX;
  int diff = ((diff1 + 25) % 26) + 1;
  new = ((original - 97 + diff) % 26) + 97;
  printf("A letra que vai substituir a letra \"%c\" eh \"%c\"", original, new);
}
