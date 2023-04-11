//Daniel Ferreira Santana
//Lista de Exercícíos 1 ao 23


1. Numa construção if sem else, o que acontece se a condição de teste for falsa? 
a. O controle procura pelo último else do programa;
b. Nada; 
c. O controle passa para a instrução seguinte ao if; 
d. O corpo do comando if é executado.

Resposta: C

2. Faça um programa que receba o número de lados de um polígono convexo (N>=3 ), 
calcule e mostre o número de diagonais desse polígono. Sendo N o número de lados 
do polígono, o número de diagonais é dado por: ND=N(N-3)/2. Obs.: O número de diagonais 
é sempre inteiro e caso N seja menor que 3, solicite novo valor para N até que N seja maior ou igual a 3.

#include <stdio.h>

int main(){

    int n, nd;

    printf("Digite um númeo: ");
    scanf("%d", &n);

 
    if(n<3){
        do{
            printf("Digite um valor >= 3: ");
            scanf("%d", &n);
    }while(n<3);}
   
    nd = n*(n-3)/2;
    printf("\n O número de diagonais é: %d", nd);
    
    return 0;

}

3. Uma empresa determinou um reajuste salarial de 5% a todos os seus funcionários. 
Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$750,00. 
Dado o valor do salário de um funcionário, informar para quanto ele será reajustado.

#include <stdio.h>

int main(){

    float salario;
    
    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);
    
    salario -= (5*(salario/100));
    
    if(salario<=750){
        salario += 100;
    }
    
    printf("\n Seu novo salário é: %.2f", salario);
  
    return 0;

}

4. Dados 2 números imprimi-los em ordem crescente. Ordem crescente quando um é menor ou igual ao seguinte.

#include <stdio.h>

int main(){

    int n1, n2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    if(n1<n2){
        printf("\n %d %d", n1, n2);
    }else{
        printf("\n %d %d", n2, n1);
    }
  
    return 0;

}

5. Dados 3 números imprimir o maior

#include <stdio.h>

int main(){

    int n1, n2, n3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o segundo número: ");
    scanf("%d", &n3);
    
    if(n1>n2 & n1>n3){
        printf("\n %d", n1);
    }else if(n2>n1 & n2>n3){
        printf("\n %d", n2);
    }else if(n3>n1 & n3>n2){
        printf("\n %d", n3);
    }
  
    return 0;

}

6. Dados 3 números imprimi-los em ordem crescente. Ordem crescente quando um é menor ou igual ao seguinte.

#include <stdio.h>

int main(){

    int n1, n2, n3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o segundo número: ");
    scanf("%d", &n3);
    
    if(n1>n2 & n1>n3){
        if(n2>n3){
            printf("\n %d %d %d", n3, n2, n1);
        }else{
            printf("\n %d %d %d", n2, n3, n1);
        }
    }    
    if(n2>n1 & n2>n3){
        if(n1>n3){
            printf("\n %d %d %d", n3, n1, n2);
        }else{
            printf("\n %d %d %d", n1, n3, n2);
        }  
    }
    if(n3>n2 & n3>n1){
        if(n1>n2){
            printf("\n %d %d %d", n2, n1, n3);
        }else{
            printf("\n %d %d %d", n1, n2, n3);
        }    
    }   
  
    return 0;

}

7. Use o operador condicional ternário para imprimir o maior entre 2 números.

#include <stdio.h>

int main(){

    int n1, n2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    n1 > n2 ? printf("\n %d", n1):printf("\n %d", n2);
    
    return 0;

}

8. Seja e uma variável inteira contendo o número de erros detectados em determinado processo. 
Use o operador condicional ternário para codificar uma instrução capaz de exibir saídas como: 1 erro detectado. 5 erros detectados.

#include <stdio.h>

int main(){

    int e, n1, n2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    n1 > n2 ? :e++;
    n1 + n2 > 10 ? :e++;
    n1 / n2 == 2 ? :e++;
    
    if(e==1){
        printf("\n %d erro detectado", e);
    }else if (e>1){
        printf("\n %d erros detectados", e);
    }else{
        printf("\n Nenhum erro detectado");
    }
    return 0;

}

9. Usando o operador condicional ternário, codifique uma instrução para exibir valores lógicos como true e false. 
Para o valor 0 deve aparecer false e para qualquer outro, true.

#include <stdio.h>

int main(){

    int n1, n2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    n1 == 0 ? printf("\n false"):printf("\n true");
    n2 == 0 ? printf("\n false"):printf("\n true");
    n1 + n2 == 0 ? printf("\n false"):printf("\n true");
    n1 - n2 == 0 ? printf("\n false"):printf("\n true");
    n1 * n2 == 0 ? printf("\n false"):printf("\n true");
    n1 / n2 == 0 ? printf("\n false"):printf("\n true");
    
    return 0;

}

10. A vantagem de uma construção switch sobre um if-else é: 
a. Uso do default no switch; 
b. O switch fornece clareza e facilidade de leitura; 
c. Os casos de um switch permitem diversas escolhas; 
d. Várias instruções podem ser executadas em cada caso de um switch.	

Resposta: B

11. Verdadeiro ou Falso. 
a. Toda construção switch pode ser transformado em if encadeado. 
b. Todo if encadeado pode ser transformado em uma construção switch. 

Resposta: a = Vedadeiro. b = Verdadeiro

12. Usando a estrutura de decisão múltipla, codifique um programa que leia os 4 dígitos da placa de um carro 
(0<placa<=9999) e informe o dia do seu rodízio (dica: use o operador % para obter o ultimo dígito da placa). 

#include <stdio.h>

int main(){

    int placa, rodizio;
    
    printf("Digite o número da placa: ");
    scanf("%d", &placa);
    
    if(placa>0){
        if(placa<=9999){
            rodizio = placa%10;
            switch(rodizio){
                case 1:
                case 2: printf("\n Segunda-Feira"); break;
                case 3:
                case 4:printf("\n Terça-Feira"); break;
                case 5:
                case 6:printf("\n Quarta-Feira"); break;
                case 7:
                case 8:printf("\n Quinta-Feira"); break;
                case 9:
                case 0:printf("\n Sexta-Feira"); break;
                default: printf("\n Valor inválido");
            }
        }else{
            printf("Número inválido");
        }    
    }else{
        printf("Número inválido");
    }
    
    return 0;

}

13. Um comando break: 
a. Termina um programa; 
b. É obrigatório em uma construção switch; 
c. Causa saída imediata de um if; 
d. Causa saída imediata de um laço (for; while; do-while).

Resposta: D

14. Quais os valores das variáveis x e y após a execução dessas instruções? Por quê? 
a. Seja x=5 e a instrução y = x++ + ++x. 
Resposta: x = 7, y = 12. O x foi incrementado duas vezes durante a execução da instrução, porém, um dos incrementos
foi feito após a atribuição do valor à y.

b. Seja x=3 e a instrução y = x * (x + 1) * x++. 
Resposta: x = 4, y = 36. Ao executar a instrução o valor de x se mantém 3, e só é incrementado após seu fim.

c. Seja x=5, y = 3 e a instrução y *= x+1. 
Resposta: x = 5, y = 18. Não houve incremento no valor de x, e durante a instrução é utilizado o valor já atribuído
a y para realizar a opeação matemática.

15. As três expressões que compõem a expressão do laço for são separadas por _____.

Resposta: Ponto e vírgula(;).

16. Um laço do-while é útil quando seu corpo: 
a. Nunca é executado; 
b. Pode nunca ser executado; 
c. Deve ser executado pelo menos uma vez; 
d. Termina após a primeira execução.

Resposta: C

17. Dado n positivo e uma seqüência de n números calcular a soma dos elementos da seqüência. Faça um loop 
para validar se n é maior que zero, ou seja, enquanto n<=0 exiba uma mensagem de erro e solicite um novo 
valor de n.

#include <stdio.h>

int main(){

    int n;
    int soma = 0;
    
    do{
        printf("\n Soma da sequência: %d", soma);
        printf("\n Digite um valor maior que 0: ");
        scanf("%d", &n);
        
        if(n>0){
            soma += n;
        }else{
            printf("Valor inválido");
        }
        
    }while(n>=0);
    
    return 0;

}

18. Idem anterior, calculando a média.

#include <stdio.h>

int main(){

    int n, i, media = 0, soma = 0;
    
    do{
        printf("\n Soma da sequência: %d", soma);
        printf("\n Média da sequência: %d", media);
        printf("\n Digite um valor maior que 0: ");
        scanf("%d", &n);
        i++;
        
        if(n>0){
            soma += n;
            media = soma/i;
        }else{
            printf("Valor inválido de n");
        }
        
    }while(n>=0);
    
    return 0;

}

19. Idem anterior, determinando o maior e o menor.


#include <stdio.h>

int main(){

    int n, i, media = 0, soma = 0, maior, menor;
    
    printf("\n Digite um valor maior que 0: ");
    scanf("%d", &n);
    
    if(n>0){
        maior = n;
        menor = n;
        i++;
        soma += n;
        media = soma/i;
    }
    
    do{
        printf("\n Maior valor da sequência: %d", maior);
        printf("\n Menor valor da sequência: %d", menor);
        printf("\n Média da sequência: %d", media);
        printf("\n Soma da sequência: %d", soma);
        printf("\n Digite um valor maior que 0: ");
        scanf("%d", &n);
        
        if(n>0){
            i++;
            soma += n;
            media = soma/i;
            
            if(n>maior){
                maior = n;
            }
            
            if(n<maior){
                menor = n;
            }
        
        }else{
            printf("Valor inválido de n");
        }
        
    }while(n>=0);
    
    return 0;

}

20. Dado N >= 0 inteiro e X real, codificar uma função que calcule X elevado a potência N (sem usar pow). 

#include <stdio.h>

int main() {
    int n, x, resultado = 1;

    printf("Insira os valores de N e X: ");
    scanf("%d %d", &n, &x);

    if(n>=0){
        for (int i = 0; i < n; i++) {
            resultado *= x;
        }

        printf("%d elevado a potencia %d é igual a %d.\n", x, n, resultado);
    }else{
        printf("\n Valor inválido");
    }
    return 0;
}

21. Dado N >= 0 inteiro, codificar uma função que calcule N! (N fatorial)

#include <stdio.h>

int main() {
    int numero, fatorial = 1, i = 1;

    printf("Insira um número inteiro positivo: ");
    scanf("%d", &numero);

    if(numero>=0){
        while (i <= numero) {
            fatorial *= i;
            i++;
        }
        
        printf("O fatorial de %d é %d.\n", numero, fatorial);
    }else{
        printf("\n Valor inválido");
    }
    return 0;
}

22. Dado N >= 0 inteiro e X real, codificar uma função que calcule o valor da soma: 1 + X + X^2 + ... + X^N 

#include <stdio.h>

int main() {
    int numero, potencia, soma = 1,resultado = 1, iNum = 1 ;

    printf("Insira um número inteiro positivo: ");
    scanf("%d", &numero);
    printf("Insira um número inteiro positivo para a potência: ");
    scanf("%d", &potencia);

    if(numero>=0){
        while (iNum <= numero) {
            for (int iPot = 0; iPot < potencia; iPot++) {
                resultado *= numero;
                soma += resultado;
                iNum++;
            }
        }
        
        printf("O valor da soma é: %d", soma);
    }else{
        printf("\n Valor inválido");
    }
    return 0;
}

23. Um comerciante precisa informatizar o caixa de sua loja. Para isso ele precisa de um programa que leia uma 
série de valores correspondendo aos preços das mercadorias compradas por um cliente (o valor zero finaliza 
a entrada), calcule o valor total, subtraia deste valor o desconto devido (vide tabela) e, finalmente, mostre o 
valor a ser pago pelo cliente. 
Codifique esse programa criando funções. Uma função para entrada de 
dados, que solicita ao usuário os valores das mercadorias e devolve o total da 
compra. E outra função que recebe o valor total da compra, aplica os devidos 
descontos e devolve o valor final da compra.

#include <stdio.h>

float entradaDados(){
    
    float item, total = 0;
    system("cls");
    
    printf("Digite o valor das mercadorias (zero para sair): ");
    
    do{
        scanf("%f", &item);
        if(item<0){
            printf("Valor inválido");
        }else{
            total += item;
        }
    }while(item!=0);
    return total;
}

float desconto(float vlr){
    
    if(vlr<50)
        return 0.95*vlr;
    if(vlr<100)
        return 0.9*vlr;
    if(vlr<200)
        return 0.85*vlr;
    return 0.8*vlr;
}

int main() {
    float vlrTotal, vlrCompra; 
    vlrTotal = entradaDados();
    vlrCompra = desconto(vlrTotal);
    
    printf("\n O valor total a ser pago é: R$%.2f", vlrCompra);
    return 0;
}