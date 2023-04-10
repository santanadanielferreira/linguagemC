#include <stdio.h>

int main() {
    int numero, fatorial = 1, i = 1;

    // solicita ao usuário para inserir um número inteiro positivo
    printf("Insira um número inteiro positivo: ");
    scanf("%d", &numero);

    // calcula o fatorial do número
    while (i <= numero) {
        fatorial *= i;
        i++;
    }

    // imprime o fatorial do número
    printf("O fatorial de %d é %d.\n", numero, fatorial);

    return 0;
}
