#include <stdio.h>
#include <stdlib.h>

int main () {

    char nome [20];
    float salBruto, porc, aument, salFinal;
    puts ("Informe seu nome: ");
    scanf ("%19[^\n]s", nome);
    fflush (stdin);
    printf ("Ola senhor %s, digite seu salario: \n", nome);
    scanf ("%f", &salBruto);
    puts ("Insiera o percentual: ");
    scanf ("%f", &porc);
    aument = salBruto * (porc/100);
    salFinal = salBruto + aument;
    system ("CLS");

    printf ("Senhor %s, seu aumento foi de: %.2f\n", nome, aument);
    printf ("Seu novo salario sera: %.2f\n", salFinal);

    return 0;
}