#include <stdio.h>
//pequeno exemplo de como ficaria uma matriz dentro de uma função:

void imprime (int m[][3], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < 3; j++){
            printf ("%d", m[i][j]);
        }
        printf ("\n");
    }
}
int main () {
    int mat [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    imprime (mat, 3);
}