#include <stdio.h>

int main() {
    int n, soma = 0;

    // solicita ao usuário para inserir um número inteiro positivo
    printf("Insira um número inteiro positivo: ");
    scanf("%d", &n);

    // calcula o quadrado do número usando a soma de ímpares
    for (int i = 1; i <= n; i += 2) {
        soma += i;
    }

    // imprime o quadrado do número
    printf("O quadrado de %d é %d.\n", n, soma);

    return 0;
}
