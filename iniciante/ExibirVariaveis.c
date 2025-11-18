#include <stdio.h>
int main () {
    int idade = 0;
    float altura = 0.0;
    char nome [50] = "";

    printf ("Digite seu nome: \n");
    scanf ("%s", &nome);
    printf ("Digite sua altura: \n");
    scanf ("%f", &altura);
    printf ("Digite sua idade: \n");
    scanf ("%d", &idade);

    printf ("-----------------------\n");
    printf ("Ola %s, suas informacoes sao: \n", nome);
    printf ("idade: %d anos. Altura: %.2f \n", idade, altura);
}