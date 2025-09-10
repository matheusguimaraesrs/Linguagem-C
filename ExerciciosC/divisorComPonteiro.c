#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main ()
{
    int a = 5;
    int b = 2;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf("Divisao: %d\n", div);
    printf("Resto: %d\n", mod);
}