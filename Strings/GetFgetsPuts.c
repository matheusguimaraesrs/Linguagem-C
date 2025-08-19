#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char nome [10];
    char sobrenome [50];
    printf ("Digite seu primeiro nome: \n");
    gets (nome);  //Permite estouro de limite do vetor, assim como o Scanf simples
    fflush (stdin); //Serve para limpar qualquer lixo que possa ficar no teclado após uma entrada de dados. Boas práticas.
    printf ("Digite seu sobrenome: \n");
    fgets (sobrenome, 50, stdin);
    fflush (stdin);
    puts ("");
    puts ("nome: "); //Imprimi uma string direto na tela, mas não permite a leitura de outras variáveis.
    puts (nome);
    puts ("sobrenome: ");
    puts (sobrenome);
}