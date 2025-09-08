#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define clientes 3
struct pessoa {
    char nome [50];
    int idade;
    float peso;
};
typedef struct pessoa pessoa;

int main () {
    setlocale (LC_ALL, "Portuguese");
    pessoa lista [clientes];
    int i;
    for (i = 0; i < clientes; i++)
    {
            printf ("Insira os dados do cliente %d \n", i+1);
            puts ("Nome: ");
            scanf ("%50[^\n]s", &lista[i].nome);
            fflush (stdin);

            puts ("Idade: ");
            scanf ("%d", &lista[i].idade);
            fflush (stdin);

            puts ("Peso: ");
            scanf ("%f", &lista[i].peso);
            fflush (stdin);
    }
    system ("cls");
    puts ("Clientes Cadastrados: ");
    for (i = 0; i < clientes; i++){
        printf ("----------Cliente %d----------\n", i+1);
        printf ("Nome: %s\n", lista[i].nome);
        printf ("Idade: %d\n", lista[i].idade);
        printf ("Peso: %.3f\n", lista[i].peso);
    }
    printf ("-----------------------------\n");
}