#include <stdio.h>

int main() {
  int termo_inicial, razao;
  printf("Informe o termo inicial da PA: ");
  scanf("%d", &termo_inicial);
  printf("Informe a razao da PA: ");
  scanf("%d", &razao);

  printf("1º Termo: %d\n", termo_inicial); // N
  printf("2º Termo: %d\n", termo_inicial += razao); // N + R
  printf("3º Termo: %d\n", termo_inicial += razao); // N + R * 2
  printf("4º Termo: %d\n", termo_inicial += razao); // N + R * 3
  printf("5º Termo: %d\n", termo_inicial += razao); // N + R * 4

  /*
    "termo_inicial += razao"
    eh a mesma coisa que:
    "termo_inicial = termo_inicial + razao"
  */

  return 0;
}
