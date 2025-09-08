/*Desenvolva uma calculadora que faça adição, subtração, divisão e multiplicação
mas só calcule 2 números por vez*/

#include <stdio.h>

int main () {
    int op, num1, num2, res, resto;

    puts ("--- C A L C U L A D O R A ---");
    puts("Escolha uma das opcoes");
    puts ("1: somar");
    puts ("2: diminuir");
    puts ("3: multiplicar");
    puts ("4: dividir");
    scanf ("%d", &op);
    
    if (op == 1 || op == 2 || op == 3 || op == 4){
        puts ("Digite o primeiro numero: ");
        scanf ("%d", &num1);
        puts ("Digite o segundo numero: ");
        scanf ("%d", &num2);
        if (op == 1){
            res = num1 + num2;
            printf ("%d + %d = %d\n", num1, num2, res);
        }else if (op == 2){
            res = num1 - num2;
            printf ("%d - %d = %d\n", num1, num2, res);
        } else if (op == 3){
            res = num1 * num2;
            printf ("%d x %d = %d\n", num1, num2, res);
        } else if (op == 4){
            if (num1 == 0 || num2 == 0){
                puts ("Operacao Invalida: zero");
            } else {
                res = num1 / num2;
                resto = num1 % num2;    
                printf ("%d / %d = %d\n", num1, num2, res);
                printf ("Resto da divisao: %d\n", resto);
            }
        }
    } else {
        puts ("Operacao Incorreta");
    }
}