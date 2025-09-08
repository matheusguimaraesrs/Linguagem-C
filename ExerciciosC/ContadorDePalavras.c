/*Exercício 3: Contagem de Palavras
Crie uma função void chamada contarPalavras que receba uma string (char *) e um ponteiro para um inteiro (int *total).

A função deve contar o número de palavras na string.

Uma palavra é definida como uma sequência de caracteres que não é espaço.

Use apenas a aritmética de ponteiros para percorrer a string.

A contagem deve ser retornada para o main usando o ponteiro int *total.

Conceitos avaliados: Funções void, passagem por referência (ponteiros como parâmetros), lógica avançada com ponteiros e while loops.*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define n 500


void contarPalavras (char *frase, int *total){
    if (*frase != ' '){
        *total = 1;
    }else{
        *total = 0;
    }
    
    while (*frase != '\0'){
        if (*frase == ' ' && *(frase+1) != ' ' && *(frase+1) != '\0'){
            (*total)++;
        }
        frase++;
    }
}

int main () {
    char frase[n];
    int total;

    puts (">>>>>CONTADOR DE PALAVRAS<<<<<");
    puts ("Insira uma frase: ");
    fgets (frase, n, stdin);
    frase[strcspn(frase, "\n")]='\0';
   

    if (frase[0] == '\0'){
        puts ("Opcao Invalida...");
    } else {
        contarPalavras (frase, &total);
        printf ("Sua frase possui %d palavras...", total);
    }
}