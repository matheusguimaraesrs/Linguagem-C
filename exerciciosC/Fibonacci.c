#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que mostreos oitos
primeiros termos da sequência de Fibonacci*/

int main () {
    int fn1, fn2, result, i;
    fn1 = 0;
    fn2 = 1;
    printf ("%d %d ", fn1, fn2);
    for (i = 3; i <= 8; i++){
        result = fn1 + fn2;
        fn1 = fn2;
        fn2 = result;
        printf ("%d ", result);
    }
    
}