#include <stdio.h>

void main() {
  int posicao, guiche, tempo;

  printf("Digite a posicao de Carlos na fila: ");
  scanf("%d", &posicao), --posicao;

  guiche = posicao % 5 + 1;
  tempo = posicao / 5 * 15;

  int horas = tempo / 60, minutos = tempo % 60;

  printf("Carlos sera atendido no %dº guiche\n", guiche);
  printf("E ele tera que esperar %d horas, %d minutos e 0 segundos\n", horas, minutos);
}
