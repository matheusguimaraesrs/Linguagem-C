#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "Portuese");
    float nota1, nota2, nota3, m;
    char nome[10];

    puts ("Digite o nome do aluno: ");
    fgets (nome, 10, stdin);
    nome[strcspn(nome, "\n")]='\0';
    puts ("Digite a nota do TRABALHO DE LABORATORIO: ");
    scanf ("%f", &nota1);
    puts ("Digite a nota da AVALIACAO SEMESTRAL: ");
    scanf ("%f", &nota2);
    puts ("Digite a nota do EXAME FINAL: ");
    scanf ("%f", &nota3);

    m = (nota1*2 + nota2*3 + nota3*5)/10;
    system ("cls");

    if (m >= 8.0 && m <= 10.0) {
        printf ("%s, sua media eh: %.1f conceito: A\n", nome, m);
        puts ("APROVADO!");
    } else if (m >= 7.0 && m < 8.0) {
        printf ("%s, sua media eh: %.1f conceito: B\n", nome, m);
        puts ("APROVADO!");
    }  else if (m >= 6.0 && m < 7.0) {
        printf ("%s, sua media eh: %.1f conceito: C\n", nome, m);
        puts ("RECUPERACAO!");
    } else if (m >= 5.0 && m < 6.0) {
        printf ("%s, sua media eh: %.1f conceito: D\n", nome, m);
        puts ("RECUPERACAO!");
    } else if (m >= 0.0 && m < 5.0) {
        printf ("%s, sua media eh: %.1f conceito: E\n", nome, m);
        puts ("REPROVADO!");
    } else {
        puts ("ERRO");
    }
}