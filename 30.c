#include <stdio.h>
#include <math.h>

int main() {
  double x1, y1;
  double x2, y2;

  printf("Digite os valores de X e Y do ponto 1: ");
  scanf("%lf %lf", &x1, &y1);

  printf("Digite os valores de X e Y do ponto 2: ");
  scanf("%lf %lf", &x2, &y2);

  double distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

  printf("A distancia euclidiana entre os dois pontos eh: %lf\n", distancia);

  return 0;
}
