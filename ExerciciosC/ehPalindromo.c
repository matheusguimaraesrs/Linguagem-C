/*Verificador de Palíndromo
Crie uma função int chamada ehPalindromo que receba uma string (char *) como parâmetro.

A função deve verificar se a string é um palíndromo (lê-se da mesma forma de trás para frente, como "arara" ou "ovo").

Você deve usar apenas aritmética de ponteiros para percorrer a string do início ao fim, comparando os caracteres.

A função deve retornar 1 se for um palíndromo e 0 se não for.

Conceitos avaliados: Aritmética de ponteiros, retorno de valor de uma função, loops e lógica de comparação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100

int palindromo (char *palavra, int inicio, int final){
    
    while (inicio < final){
        if (palavra[inicio] != palavra[final]){
            return 0;
        }
        inicio++;
        final--;
    }
    return 1;
}

int main () {
    char palavra [n];
    int inicio = 0;
    int final;
    int resposta;

    puts ("----PALINDROMO----");
    puts ("Digite uma palavra:");
    fgets (palavra, n, stdin);
    palavra[strcspn(palavra, "\n")]='\0';

    final = strlen(palavra)-1;
    resposta = palindromo (palavra, inicio, final);

    if (resposta == 1){
        printf ("A palavra %s eh um palindromo", palavra);
    }else{
        printf ("A palavra %s nao eh um palindromo", palavra);
    }
}

