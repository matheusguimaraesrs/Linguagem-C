#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int vetor1[10];
    int vetor2[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira valor %d: ", i+1);
        scanf("%d", &vetor1[i]);
        system("clear");
    }
    for (int i = 0; i < 10; i++)
    {
        vetor2[i] = vetor1[i] * vetor1[i];
        printf("%d x %d = %d\n", vetor1[i], vetor1[i], vetor2[i]);
    }
    return 0;
}