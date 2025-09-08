#include <stdio.h>
int main () {
    int i;
    int num;
    printf ("Bem Vindo ao contador-For\n");
    printf ("Digite um numero: \n");
    scanf ("%d", &num);
    printf ("----------------------------\n");
    for (i = 1; i <= num; i++)
    {
        printf ("%d\n", i);
    }
    
}