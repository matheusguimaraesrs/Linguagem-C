#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[9], i, j, cont;

    for (i=0; i<9; i++){
        puts ("insira um numero:");
        scanf ("%d", &num[i]);
    }
    for (i=0; i<9; i++){
        cont = 0;
        for (j=1; j<=num[i]; j++){ //ATENÇÃO NESSE DETALHE: J = 1 é o que mantem a lógica funcionando!
            if (num[i] % j == 0){
                cont++;
            }
        }
        if (cont == 2){
            printf ("%d na posicao %d eh primo\n", num[i], i);
        }
        
    }
    
}