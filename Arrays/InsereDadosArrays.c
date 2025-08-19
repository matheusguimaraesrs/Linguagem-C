#include <stdio.h>
int main () {
    int v[5];
    int i; 
    int s = 0;

    for (i = 0; i < 5; i++){
        printf ("Insira um dado: \n");
        scanf ("%d", &v[i]);
    }
    printf ("\n");
    printf ("Dados Inseridos: \n");
    for (i = 0; i < 5; i++){
        printf ("%d ", v[i]);
    }
    printf ("\n");
    for (i = 0; i < 5; i++){
        s += v[i];
    }
    printf ("A media dos dados e: %d\n", s/5);
}