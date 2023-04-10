#include <stdio.h>

int main() {
  float peso, altura, imc;

  printf("Digite o seu peso em quilogramas: ");
  scanf("%f", &peso);

  printf("Digite a sua altura em metros: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("O seu IMC é: %.2f\n", imc);

  return 0;
}
