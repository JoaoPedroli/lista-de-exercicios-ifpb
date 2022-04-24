#include <stdio.h>

int main() {
  double celsius;
  printf("Insira a temperatura em Celsius: ");
  scanf("%lf", &celsius);
  printf("%.1lf °C em Fahrenheit: %.1lf°F\n", celsius, 32 + (celsius * (9/5.0)));
  printf("%.1lf °C em Kelvin: %.1lfK\n", celsius, celsius + 273.15);

  return 0;
}
