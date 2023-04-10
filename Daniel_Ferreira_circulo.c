#include <stdio.h>
#define PI 3.1415

int main() {
  float raio, area, perimetro;

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  area = PI * raio * raio;
  perimetro = 2 * PI * raio;

  printf("A area do circulo eh %.2f unidades de area.\n", area);
  printf("O perimetro do circulo eh %.2f unidades de comprimento.\n", perimetro);

  return 0;
}
