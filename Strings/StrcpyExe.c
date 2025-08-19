#include <stdio.h>
#include <string.h>
#include <locale.h>
# define N 20
// Treinando o uso de STRCPY juntamente com Puts e Fgets, além do Flush como boas práticas de programação.

int main () {  
    setlocale (LC_ALL, "Portuguese");
    char origem [N];
    char destino [N];
    puts ("Neste programa iremos enviar um texto de uma variavel (Origem) para outra (Destino)");
    puts ("Digite a Origem: ");
    fgets (origem, 20, stdin);
    fflush (stdin);
    printf ("Nesse momento a variavel ""Origem"" recebe %s e a variavel ""Destino"" ainda esta vazia ou com lixo de memoria: %s \n", origem, destino);
    puts ("Agora iremos usar o STRCPY para atribuir Origem ao Destino.");
    strcpy (destino, origem);
    puts ("O resultado eh esse: ");
    puts (origem);
    puts (destino);
}