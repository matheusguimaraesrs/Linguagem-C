#include <stdio.h>

void ft_div_mod(int *a, int *b)
{
    int div;
    int mod;
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;

}

int main ()
{
    int a = 5;
    int b = 2;

    ft_div_mod(&a, &b);
    printf("Divisao: %d\n", a);
    printf("Resto: %d\n", b);
}