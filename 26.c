// sem loops, esse exercicio eh muito chato XD

#include <stdio.h>

int main() {
  float soma, soma_altura = 0.0, soma_peso = 0.0;
  float altura_user1, peso_user1;
  float altura_user2, peso_user2;

  // DUPLA 1
  printf("\n=== Dupla 1 ===\n");
  printf("Digite o peso da pessoa 1 da dupla 1: ");
  scanf("%f", &peso_user1);
  printf("Digite a altura da pessoa 1 da dupla 1: ");
  scanf("%f", &altura_user1);
  printf("Digite o peso da pessoa 2 da dupla 1: ");
  scanf("%f", &peso_user2);
  printf("Digite a altura da pessoa 2 da dupla 1: ");
  scanf("%f", &altura_user2);

  soma = peso_user1 + peso_user2, soma_peso += soma;
  printf("A peso medio da dupla 1 eh: %.1f\n", soma / 2);
  soma = altura_user1 + altura_user2, soma_altura += soma;
  printf("A altura media da dupla 1 eh: %.1f\n", soma / 2);

  // DUPLA 2
  printf("\n=== Dupla 2 ===\n");
  printf("Digite o peso da pessoa 1 da dupla 2: ");
  scanf("%f", &peso_user1);
  printf("Digite a altura da pessoa 1 da dupla 2: ");
  scanf("%f", &altura_user1);
  printf("Digite o peso da pessoa 2 da dupla 2: ");
  scanf("%f", &peso_user2);
  printf("Digite a altura da pessoa 2 da dupla 2: ");
  scanf("%f", &altura_user2);

  soma = peso_user1 + peso_user2, soma_peso += soma;
  printf("A peso medio da dupla 2 eh: %.1f\n", soma / 2);
  soma = altura_user1 + altura_user2, soma_altura += soma;
  printf("A altura media da dupla 2 eh: %.1f\n", soma / 2);

  // DUPLA 3
  printf("\n=== Dupla 3 ===\n");
  printf("Digite o peso da pessoa 1 da dupla 3: ");
  scanf("%f", &peso_user1);
  printf("Digite a altura da pessoa 1 da dupla 3: ");
  scanf("%f", &altura_user1);
  printf("Digite o peso da pessoa 2 da dupla 3: ");
  scanf("%f", &peso_user2);
  printf("Digite a altura da pessoa 2 da dupla 3: ");
  scanf("%f", &altura_user2);

  soma = peso_user1 + peso_user2, soma_peso += soma;
  printf("A peso medio da dupla 3 eh: %.1f\n", soma / 2);
  soma = altura_user1 + altura_user2, soma_altura += soma;
  printf("A altura media da dupla 3 eh: %.1f\n", soma / 2);
  
  // DUPLA 4
  printf("\n=== Dupla 4 ===\n");
  printf("Digite o peso da pessoa 1 da dupla 4: ");
  scanf("%f", &peso_user1);
  printf("Digite a altura da pessoa 1 da dupla 4: ");
  scanf("%f", &altura_user1);
  printf("Digite o peso da pessoa 2 da dupla 4: ");
  scanf("%f", &peso_user2);
  printf("Digite a altura da pessoa 2 da dupla 4: ");
  scanf("%f", &altura_user2);

  soma = peso_user1 + peso_user2, soma_peso += soma;
  printf("A peso medio da dupla 4 eh: %.1f\n", soma / 2);
  soma = altura_user1 + altura_user2, soma_altura += soma;
  printf("A altura media da dupla 4 eh: %.1f\n", soma / 2);

  printf("\n-----------------------\n");
  printf("O peso medio de todos os jogadores do torneio eh: %.1f\n", soma_peso / 8);
  printf("A altura media de todos os jogadores do torneio eh: %.1f\n", soma_altura / 8);

  return 0;
}
