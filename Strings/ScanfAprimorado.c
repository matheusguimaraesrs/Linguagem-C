#include <stdio.h>
#include <locale.h>
#define N 10

int main () {
    setlocale (LC_ALL, "Portuguese");
    char nome [N];
    printf ("Digite seu nome: \n");
    scanf ("%9[^/n]s", nome);
    fflush (stdin);
    printf ("Seu nome é %s \n", nome);
}