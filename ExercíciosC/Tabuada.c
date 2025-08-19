#include <stdio.h>
#include <stdlib.h>

/* faça um programa que imprima toda a tabuada de 1 a 10*/

int main () {
    int mult, i, j;
    mult = 10;
    for (i = 1; i <= mult; i++) {
        for (j = 1; j <= mult; j++) {
            printf ("%d X %d = %d \n", i, j, i*j);
        }
        printf ("\n");
    }
    

    return 0;
}