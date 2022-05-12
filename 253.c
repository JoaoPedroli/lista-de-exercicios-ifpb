/*
Escreva um subprograma recursivo que receba como entrada
um numero inteiro N positivo e provoque um salto de
N linhas na tela do usuario.  
*/

#include <stdio.h>

void f(int n) {
  if(n == 0) return;
  printf("\n"), f(n - 1);
}

int main() {
  int n;
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  f(n);

  return 0;
}
