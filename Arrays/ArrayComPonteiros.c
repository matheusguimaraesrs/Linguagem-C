#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100

void tamanhoString (char *nome, int *tamanho){ 
    while (*nome != '\0'){
        (*tamanho)++;
        nome++;
    }
}

int main () {
    char nome [n];
    char *ponteiro = nome;
    int tamanho = 0;

    puts ("Digite seu nome:");
    fgets (nome, n, stdin);
    nome[strcspn(nome, "\n")]='\0';
    while (*ponteiro != '\0'){
        printf ("%c", *ponteiro);
        ponteiro++;
    }
    tamanhoString (nome, &tamanho);
    printf ("tem %d caracteres", tamanho);
        
    
}