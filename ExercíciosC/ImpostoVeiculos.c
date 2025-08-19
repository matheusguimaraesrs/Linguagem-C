/*O custo de um carro novo ao consumidor final é o preço de fábrica somado
ao percentual de lucro do distribuidor, acrescido dos impostos aplicados
ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo,
o percentual de lucro do distribuidor e o percentual de impostos.

Em cada item, crie uma função distinta para calcular o retornar:
a) O valor correspondente ao lucro do distribuidor
b) O valor correspondente aos impostos
C) O preço final do veículo

Após criar cada uma das funções, desenvolva um algoritmo que declare e
invoque cada uma delas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularDis (float precoFab, float porcentoDis) {
    return precoFab * porcentoDis / 100;
}
float calcularImp (float precoFab, float porcentoImp) {
    return precoFab * porcentoImp / 100;
}
float calcularFinal (float precoFab, float lucroDis, float imp) {
    return precoFab + lucroDis + imp;
}

int main () {
    setlocale (LC_ALL, "Portuguese");
    float precoFab, porcentoImp, porcentoDis, lucroDis, imp, precoFinal;

    puts ("Digite o custo de fabrica: ");
    scanf ("%f", &precoFab);
    puts ("Digite percentual de lucro do distribuidor: ");
    scanf ("%f", &porcentoDis);
    puts ("Digite percentual de imposto: ");
    scanf ("%f", &porcentoImp);
    
    lucroDis = calcularDis (precoFab, porcentoDis);
    imp = calcularImp (precoFab, porcentoImp);
    precoFinal = calcularFinal (precoFab, lucroDis, imp);
    system ("cls");

    printf ("Percentual de lucro do distribuidor: R$%.2f\n", lucroDis);
    puts ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf ("Percentual de Impostos sobre o produto: R$%.2f\n", imp);
    puts ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf ("PRECO FINAL: R$%.2f\n", precoFinal);
}
