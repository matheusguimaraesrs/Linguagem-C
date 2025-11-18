/*Digite um código que receba dois números e exiba o maior entre os dois
Caso os números sejam iguais, imprima: "Os números são iguais".*/

#include <stdio.h>

int main () {
    int num1, num2;
    char continuar;
    do {
        puts ("Digite o primeiro numero: ");
        scanf ("%d", &num1);
        puts ("Digite o segundo numero: ");
        scanf ("%d", &num2);
        if (num1 > num2){
            printf ("-------------------------\n");
            printf ("O maior numero eh: %d\n", num1);
        }else if (num1 < num2){
            printf ("-------------------------\n");
            printf ("O maior numero eh: %d\n", num2);
        }else{
            printf ("-------------------------\n");
            printf ("Os numeros sao iguais\n");
        }
        printf ("\nDeseja recomecar?\n");
        scanf (" %c", &continuar); // o espaço entre " e %c serve para evitar erros no buffer.             
        } while (continuar == 's' || continuar == 'S');
    puts ("OPERACAO FINALIZADA!");
}