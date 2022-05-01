#include <stdio.h>

int main() {
  int a, b;
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  // maior multiplo de A que eh menor ou igual a B
  printf("O maior multiplo de A que eh menor igual a B eh: %d\n", (b / a) * a);
  
  /*
  Explicação:
    Ex.:
    A = 3
    B = 10

    Sabemos que 3 nao eh multiplo de 10
    Maior Multiplo de 3 menor ou igual a 10 = 9
    Pegamos a divisao aproximada.

    Em seguida, pegamos o numero aproximado,
    que consequentemente / coincidentemente,
    eh o maior multiplo de 3 menor ou igual a 10
    Assim, Achamos a resposta.
    
    10 / 3 = 3
    3 * 3 = (9)
  */

  return 0;
}
