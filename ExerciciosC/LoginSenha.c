/*Exercício: Sistema de Login Simples
Seu desafio é criar um programa que simula um sistema de login.

A lógica é a seguinte: o programa deve ter um nome de usuário e uma senha "guardados" (definidos no código). 
Ele vai pedir para o usuário digitar um nome de usuário e uma senha e, em seguida, 
vai verificar se as credenciais estão corretas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 50

int main () {
    char user [n] = {"matheusguimaraes"}, digiteUser [n];
    char senha [n] = {"usuario123"}, digiteSenha [n];
    char repeat;
    int userOk, senhaOk;

    do {
        puts ("Digite seu login: ");
        fgets (digiteUser, 50, stdin);
        digiteUser [strcspn(digiteUser,"\n")] = '\0';
        puts ("Digite sua senha: ");
        fgets (digiteSenha, 50, stdin);
        digiteSenha [strcspn(digiteSenha,"\n")] = '\0';
        userOk = strcmp (digiteUser, user);
        senhaOk = strcmp (digiteSenha, senha);
        system ("cls");

        if (userOk == 0 && senhaOk == 0) {
            puts ("Login bem-sucedido!");
        } else {
            puts ("Nome de usuário ou senha incorretos.");
            puts ("Tentar novamente? (s/n)");
            scanf (" %c", &repeat);
            while (getchar() != '\n' && getchar () != EOF);     
        }
    } while (repeat == 's' || repeat == 'S');
    puts ("Programa encerrado");
}