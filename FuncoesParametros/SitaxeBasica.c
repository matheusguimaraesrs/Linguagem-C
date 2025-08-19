#include <stdio.h>

float maior (float num1, float num2) { //cria-se essa função para que diminua a complexidade do código
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main () {
    float x, y, m;
    
    puts ("Digite um valor: ");
    scanf ("%f", &x);
    puts ("Digite outro valor: ");
    scanf ("%f", &y);

    m = maior (x, y); // executa a função criada anteriormente

    printf ("O maior numero eh: %.2f\n", m);
}