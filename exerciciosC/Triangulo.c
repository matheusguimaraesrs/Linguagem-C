/*Crie um programa que leia três números inteiros que representam os lados de um triângulo. 
O programa deve verificar e informar se os números formam um triângulo e, em caso afirmativo, classificar o triângulo como:

Equilátero: Todos os lados são iguais.
Isósceles: Apenas dois lados são iguais.
Escaleno: Todos os lados são diferentes.*/

#include <stdio.h>
#include <stdlib.h>

void calculaTri (int *num1, int *num2, int *num3, int *triangulo){
    if (*num1 > *num2 && *num1 > *num3){
        if (*num1 < *num2 + *num3){
            *triangulo = 1;
        }else {
            *triangulo = 0;
        }
    }else if (*num2 > *num1 && *num2 > *num3){
        if (*num2 < *num1 + *num3){
            *triangulo = 1;
        }else {
            *triangulo = 0;
       }
    }else{
        if (*num3 < *num2 + *num1){
            *triangulo = 1;
        }else {
            *triangulo = 0;
        }
    }
}

int classificar (int num1, int num2, int num3){  
    if (num1 == num2 && num1 == num3){
        return 1;
    }
    else if (num1 == num2||num2 == num3||num3 == num1){
        return 2;
    }else{
        return 3;
    }  
}

int main () {
    int num1, num2, num3, triangulo, class;

    puts ("---CALCULADORA DE TRIANGULOS---");
    puts ("insira o primeiro numero:");
    scanf ("%d", &num1);
    puts ("insira o segundo numero: ");
    scanf ("%d", &num2);
    puts ("insira o terceiro numero: ");
    scanf ("%d", &num3);
    system ("cls");

    calculaTri (&num1, &num2, &num3, &triangulo);
    class = classificar (num1, num2, num3);

    if (triangulo){
        printf ("eh um Triangulo ");
        if (class == 1){
            puts ("Equilatero");
        }else if (class == 2){
            puts ("Isosceles"); 
        }else{
            puts ("Escaleno");
        }
    }else{
        puts ("Nao eh Triangulo");
    }
}