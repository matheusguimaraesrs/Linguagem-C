#include <stdio.h>
int main () {
    int dia;
    printf ("Digite um numero de 1 a 7: \n");
    scanf ("%d", &dia);
    switch (dia){
    case 1:
        printf ("Segunda. \n");
        break;
    case 2:
        printf ("Terça. \n");
        break;
    case 3:
        printf ("Quarta. \n");
        break;
    case 4:
        printf ("Quinta. \n");
        break;
    case 5:
        printf ("Sexta. \n");
        break;
    case 6:
        printf ("Sabado. \n");
        break;
    case 7:
        printf ("Domingo. \n");
        break;
    default:
        printf ("Numero Invalido. \n");
        break;
    }
}