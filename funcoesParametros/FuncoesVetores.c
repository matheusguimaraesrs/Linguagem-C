#include <stdio.h>
// Esse código irá fazer a contagem de 1 a  5 usando funções. 

// Abaixo temos protótipos de função.
void imprime1 (int v[], int n);
// ou 
void imprime2 (int v[5]);

int main (){
    int vet[5] = {1,2,3,4,5};
    puts ("Imprime 1:");
    imprime1 (vet, 5);
// ou
    puts ("\nImprime 2:");
    imprime2 (vet);
}

//Aqui declaramos as funções que iremos executar acima:
void imprime1 (int v[], int n){
    int i; 
    for (i = 0; i < n; i++){
        printf ("%d", v[i]);
    }
}
// ou
void imprime2 (int v[5]){
    int i;
    for (i = 0; i < 5; i++){
        printf ("%d", v[i]);
    }
}
/*
as duas formas entregam o mesmo resultado, a diferença é que na segunda
eu estou declarando o valor do vetor antes de entrar no main: "V[5]".
*/ 