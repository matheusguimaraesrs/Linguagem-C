/*Um programa que receba usuários e seus respectivos dados em uma struct e depois imprima na tela 
de acordo com a escolha.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define n 3

struct dadosPessoais{
    int idade;
    float peso;
    char nome [50];
};
typedef struct dadosPessoais dadosPessoais;

int main (){
    dadosPessoais lista [n];
    int i, user;
    char consult;
    for (i = 0; i < n; i++){
        printf ("Insira o nome da %d pessoa:\n", i+1);
        fgets (lista[i].nome, 50, stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")]='\0';
        printf ("Insira o peso de %s:\n", lista[i].nome);
        scanf ("%f", &lista[i].peso);
        while (getchar() != '\n' && getchar() != EOF);
        printf ("Insira a idade de %s:\n", lista[i].nome);
        scanf ("%d", &lista[i].idade);
        while (getchar() != '\n' && getchar() != EOF);
        system ("cls");
    }
    puts ("Deseja consultar usuarios? (s/n)");
    scanf (" %c", &consult);
    while (getchar() != '\n' && getchar() != EOF);
    system ("cls");
    if (tolower(consult) == 's'){
        puts ("Qual usuario deseja consultar?");
        scanf ("%d", &user);
        while (getchar() != '\n' && getchar() != EOF);
        user = user - 1;
        puts ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf ("nome: %s\n", lista[user].nome);
        printf ("idade: %d anos\n", lista[user].idade);
        printf ("peso: %.2fkg\n", lista[user].peso);
    }
}

