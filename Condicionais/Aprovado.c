#include <stdio.h>
int main () {
    float m;
    char nome [50];
    printf ("Digite seu nome: \n");
    scanf ("%s", &nome);
    printf ("Digite sua nota: \n");
    scanf ("%f", &m);
    if (m >= 7.0){
        printf ("%s, voce foi Aprovado(a) \n", nome);
    }else{
        printf ("%s, voce foi Reprovado(a) \n", nome);
    }
}