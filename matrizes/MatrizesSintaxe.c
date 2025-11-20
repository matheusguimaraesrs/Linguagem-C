/*Nesse exemplo é para mostrar com funciona uma matriz
que é um conjunto de dois ou mais vetores, utilizando o laço FOR para 
imprimir na tela.
*/
#include <stdio.h>
int main () {
    int matriz [3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //declarando a matriz
    int i,j;
    printf ("Imprimindo Matrizes: \n");
    for (i = 0; i < 3; i++){ // i imprimi colunas
        for (j = 0; j < 3; j++){ // j imprimi linhas
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
}