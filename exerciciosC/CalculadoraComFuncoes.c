/*O seu desafio é criar um programa que funcione como uma calculadora básica. 
A ideia é separar cada operação matemática em uma função diferente.
-Pedir ao usuário para digitar dois números e um operador (+, -, *, /).
-Criar uma função para cada operação (soma, subtração, multiplicação e divisão).
-A função principal (main) deve chamar a função correta de acordo com o operador que o usuário digitou.
-Exibir o resultado final da operação.
exemplo:
float somar(float num1, float num2)
float subtrair(float num1, float num2)
float multiplicar(float num1, float num2)
float dividir(float num1, float num2)*/

#include <stdio.h>
#include <stdlib.h>

int funcaoSomar (int num1, int num2) {
    return num1 + num2;
}
int funcaoSub (int num1, int num2) {
    return num1 - num2;
}
int funcaoMult (int num1, int num2){
    return num1 * num2;
}
float funcaoDiv (float num1, float num2) {
    return num1 / num2;
}

int main () {
    char operador, repeat;
    int somar, sub, mult, num1, num2;
    float num1Div, num2Div, div;
    do {
        puts ("-----CALCULADORA COM FUNCOES-----");
        puts ("qual operador deseja usar? (+, -, *, /)");
        scanf (" %c", &operador); 
        while (getchar() != '\n' && getchar() != EOF);
        if (operador == '/') {
            puts ("digite o primeiro numero: ");
            scanf ("%f", &num1Div);
            puts ("digite o segundo numero: ");
            scanf ("%f", &num2Div);
            if (num2Div == 0) {
                puts ("ERRO1: numero nao divisivel");
            } else {
                div = funcaoDiv (num1Div, num2Div);
                printf ("%.1f / %.1f = %.1f\n", num1Div, num2Div, div);
            }
        } else {
                puts ("digite o primeiro numero: ");
                scanf ("%d", &num1);
                puts ("digite o segundo numero: ");
                scanf ("%d", &num2);
                if (operador == '+'){
                    somar = funcaoSomar (num1, num2);
                    printf ("%d + %d = %d\n", num1, num2, somar);
                } else if (operador == '-') {
                    sub = funcaoSub (num1, num2);
                    printf ("%d - %d = %d\n", num1, num2, sub);            
                } else {           
                     mult = funcaoMult (num1, num2);
                     printf ("%d * %d = %d\n", num1, num2, mult);
                }
        }
        
        puts ("Deseja realizar outra operacao? (s/n)");
        scanf (" %c", &repeat);
        while (getchar() != '\n' && getchar() != EOF);  
        system ("cls");
    } while (repeat == 's');
    puts ("Operacao Encerrada!");
}