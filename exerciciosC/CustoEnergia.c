/*Sabe-se que o quilowatt de energia custa um milésimo do salário mínimo.
Faça um procedimento que receba o valor do salário mínimo e quantidade
de quilowatt consumida por uma residência. O procedimento deve calcular 
e retornar através de passagem de parâmetros por referência:
a) o valor em reais de cada quilowatts;
b) o valor em reais a ser pago;
c) o valor em reais a ser pago com 15% de desconto.
Sabendo disso, desenvolva um programa que receba o valor do salário minimo 
e a quantidade de quilowatt consumida. Invoque o respectivo procedimento e
mostre na tela as informações a, b e c.*/

#include <stdio.h>
#include <stdlib.h>

void calcKW (float kwConsum, float salarioMin, float *kw, float *valorFinal, float *desc){
    *kw = salarioMin / 1000;
    *valorFinal = *kw * kwConsum;
    *desc = *valorFinal - (*valorFinal * 15 / 100);
}


int main () {
    float kw, kwConsum, valorFinal, desc;
    float salarioMin = 1518.00;

    puts ("---CALCULAR QUILOWATT---");
    puts ("Digite seu quilowatt consumido: ");
    scanf ("%f", &kwConsum);
    system ("cls");

    calcKW (kwConsum, salarioMin, &kw, &valorFinal, &desc);

    printf ("Valor do Quilowatt: R$%.2f\n", kw);
    printf ("Valor a ser pago: R$%.2f\n", valorFinal);
    printf ("Com desconto: R$%.2f\n", desc);
}