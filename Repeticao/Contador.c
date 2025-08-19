#include <stdio.h>
int main () {
    int i = 1;
    int num = 0;
    printf ("Digite um numero: \n");
    scanf ("%d", &num);
    printf ("---------------------------------\n");
    printf ("Contador:\n");
    while (i <= num) {
        printf ("%d \n", i);
        i++;
    }
}