/* Jeremias possui um cronometro que marca somente segundos,
Faça um programa que receba o tempo cronometrado em segundos e
converta para horas e minutos também.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    char repetir;
    do {
        int seg, min, hr;
        puts ("Digite o tempo cronometrado: ");
        scanf ("%d", &seg);

        hr = seg / 3600; // transforma segundos em horas
        seg = seg % 3600; // confere o resto da divisão que será os segundos restantes
        min = seg / 60; // transforma segundos restantes em min
        seg = seg % 60; // confere o resto da divisão que será os segundos finais

        printf ("O tempo cronometrado foi de %d hrs, %d min e %d segundos \n", hr, min, seg);
        puts ("Deseja repetir? (s/n)");
        scanf (" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');
   
    puts ("Operacao Finalizada!");
    return 0;
}