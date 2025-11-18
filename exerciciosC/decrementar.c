#include <stdio.h>

void decrementar_por_ponteiro(int* ptr) {
    (*ptr)--;
}

int main() {
    int numero = 10;
    
    printf("Valor antes da chamada da funcao: %d\n", numero);
    decrementar_por_ponteiro(&numero);
    printf("Valor depois da chamada da funcao: %d\n", numero);
    return 0;
}