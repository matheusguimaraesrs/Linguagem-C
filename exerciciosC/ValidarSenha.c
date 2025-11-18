/*O seu desafio é criar um programa que verifica se uma senha digitada pelo usuário
 atende a algumas regras básicas de segurança. Para cada regra, você deve criar uma função separada.
Passo a passo:
-Criar as seguintes funções para validar a senha:
-int verificarTamanho(char senha[]): Retorna 1 se a senha tiver 8 caracteres ou mais, e 0 caso contrário.
-int verificarDigito(char senha[]): Retorna 1 se a senha contiver pelo menos um número (dígito), e 0 caso contrário.
-int verificarLetra(char senha[]): Retorna 1 se a senha contiver pelo menos uma letra, e 0 caso contrário.
-A função principal (main) deve chamar todas as funções de validação.
-Se todas as funções retornarem 1, exiba a mensagem "Senha válida!".
-Se alguma função retornar 0, exiba a mensagem "Senha inválida." 
e diga qual regra não foi cumprida (por exemplo, "A senha deve ter pelo menos 8 caracteres.").
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define n 50

int verificaTamanho (char senha[n]){
    return strlen (senha) >=8;
}
int verificaDigito (char senha[n]){
    for (int i = 0; senha[i] != '\0'; i++){
        if (isdigit(senha[i])){
            return 1;
        }     
    }
    return 0;
}
int verificaLetra (char senha [n]){
    for (int i = 0; senha[i] != '\0'; i++){
        if (isalpha(senha[i])){
            return 1;
        }
    }
    return 0;
}

int main () {
    char user[n], senha[n], repeat;
    
    do{
        puts ("----CRIAR UMA CONTA----");
        puts ("Digite seu nome de usuario: ");
        fgets (user, n, stdin);
        user[strcspn(user, "\n")] = '\0';
    
        puts ("Sua senha deve conter no minimo Um numero, Uma letra e 8 digitos");
        puts ("Digite sua senha:");
        fgets (senha, n, stdin);
        senha[strcspn(senha, "\n")] = '\0';

        int temTamanho = verificaTamanho (senha);
        int temDigito = verificaDigito (senha);
        int temLetra = verificaLetra (senha);
        system ("cls");

        if (temTamanho && temDigito && temLetra){
            puts ("Senha validada com sucesso!");
            return 0;
        } else {
            puts ("Senha invalida...");
            if (!temTamanho){
                puts ("Necessario no minimo 8 digitos");
            } 
            if (!temDigito){
                puts ("Necessario ter pelo menos um numero");
            }
            if (!temLetra){
                puts ("Necessario ter pelo menos uma letra");
            }
        }
        puts ("Deseja tentar novamente? (s/n)");
        scanf (" %c", &repeat);
        while (getchar() != '\n' && getchar() != EOF);
    } while (repeat == 's' || repeat == 'S');
}