/*Crie um programa que receba uma palavra/frase e conte quantas vogais tem utilizando uma void*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define n 50

void contVogais (char entrada [n], int *vogais){
    for (int i = 0; entrada [i] != '\0'; i++){
        if (tolower (entrada [i]) == 'a' || tolower (entrada [i]) == 'e' || tolower (entrada [i]) == 'i' || tolower (entrada [i]) == 'o' || tolower (entrada [i]) == 'u'){
            (*vogais)++;
        }
    }
    
}

int main () {
    char entrada [n], repetir;
    do{
        int vogais = 0;
        puts ("---CONTADOR DE VOGAIS---");
        puts ("Insira uma palavra:");
        fgets (entrada, n, stdin);
        entrada[strcspn(entrada, "\n")] = '\0';

        contVogais (entrada, &vogais);

        printf ("Total de vogais: %d\n", vogais);
        system ("pause");
        system ("cls");
        puts ("Deseja repetir? (s/n)");
        scanf (" %c", &repetir);
        while (getchar() != '\n' && getchar() != EOF); 
    } while (tolower (repetir) == 's');
}   

