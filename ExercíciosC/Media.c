#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1, n2, n3, n4, soma;
    float media;
    char simOuNao;

    puts ("Digite o primeiro numero: ");
    scanf ("%d", &n1);
    puts ("Digite o segundo numero: ");
    scanf ("%d", &n2);
    puts ("Digite o terceiro numero: ");
    scanf ("%d", &n3);
    puts ("Digite o quarto numero: ");
    scanf ("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf ("Resultado da soma: %d \n", soma);
    puts ("Deseja saber a media? (s/n)");
    scanf (" %c", &simOuNao);
    if (simOuNao == 's' || simOuNao == 'S') {
        media = soma / 4;
        printf ("A media eh: %.2f\n", media);
    }else{
        puts ("Operacao Finalizada");
    }

    return 0;
}