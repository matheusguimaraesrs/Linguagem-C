#include <stdio.h>

void ft_swap(int *a, int *b)
{
        int change = *a;
        *a = *b;
        *b = change;
}

int main (void){

        int a = 59;
        int b = 65;
        puts ("Antes da funcao:");
        printf ("A = %d\n B = %d\n", a, b);
        ft_swap(&a, &b);
        puts ("depois da funcao:");
        printf ("A = %d\n B = %d\n", a, b);

}