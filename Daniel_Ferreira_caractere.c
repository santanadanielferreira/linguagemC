#include <stdio.h>

int main() {
  char caractere;

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  printf("O codigo ASCII do caractere '%c' em octal eh %o.\n", caractere, caractere);
  printf("O codigo ASCII do caractere '%c' em decimal eh %d.\n", caractere, caractere);
  printf("O codigo ASCII do caractere '%c' em hexadecimal eh %x.\n", caractere, caractere);

  return 0;
}
