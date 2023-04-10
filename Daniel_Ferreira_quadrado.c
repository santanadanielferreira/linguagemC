#include <stdio.h>

int main() {
    int numero;

    // solicita ao usuário para inserir uma sequência de números inteiros
    printf("Insira uma sequência de números inteiros (0 para sair):\n");

    // lê o primeiro número da sequência
    scanf("%d", &numero);

    // enquanto o número lido for diferente de zero
    while (numero != 0) {
        // calcula e imprime o quadrado do número
        printf("%d\n", numero * numero);

        // lê o próximo número da sequência
        scanf("%d", &numero);
    }

    return 0;
}
