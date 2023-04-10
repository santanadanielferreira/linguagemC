#include <stdio.h>

int main() {
    int n, x, resultado = 1;

    // solicita ao usuário para inserir os valores de N e X
    printf("Insira os valores de N e X: ");
    scanf("%d %d", &n, &x);

    // calcula X elevado a potência N
    for (int i = 0; i < n; i++) {
        resultado *= x;
    }

    // imprime o resultado
    printf("%d elevado a potencia %d é igual a %d.\n", x, n, resultado);

    return 0;
}
