/*Faça um programa que receba o número de horas trabalhadas por um gestor
e o valor do salário mínimo vigente. Crie uma função que calcule o salário
a receber do gestor, seguindo as regras abaixo:

I- A hora trabalhada vale a metade do salario minimo;
II- O salário bruto equivale ao número de horas trabalhadas multiplicado 
pelo valor da hora trabalhada (horas x valor por hora); 
III- O imposto equivale a 3% do salário bruto;
IV- O salário a receber equivale ao salário bruto menos o imposto.
O programa deve invocar as funções e imprimir o salário a receber*/

#include <stdio.h>
#include <stdlib.h>

float calcularSalarioBruto (float valorPH, int horas){
    return horas*valorPH;
}
float calcularImp (float salarioBruto, float imp){
    return salarioBruto - (salarioBruto * imp / 100.0f);
}
float calcularVendas (float salarioLiq, float vendas){
    if (vendas >= 50000.00 && vendas < 100000.00){
        salarioLiq += 500.00; 
    } else if (vendas >= 100000.00 && vendas < 150000.00){
        salarioLiq += 800.00;
    } else if (vendas >= 150000.00){
        salarioLiq += 1300.00;
    }
    return salarioLiq + (vendas * 2 / 100);
}

int main () {
    int horas, cargo, vendas;
    float valorPH, salarioBruto, salarioLiq, imp;
    puts ("---CONSULTE SEU SALARIO---");
    puts ("Insira suas horas trabalhadas: ");
    scanf ("%d", &horas);
    system ("cls");
    puts ("1- Estoque / 2- Encarregado / 3- Vendas / 4- Gerencia / 5- Diretoria");
    puts ("Qual o seu cargo na empresa?");
    scanf ("%d", &cargo);
    system ("cls");
    switch (cargo){
    case 1:
        valorPH = 8.0;
        imp = 9;
        salarioBruto = calcularSalarioBruto (valorPH, horas);
        salarioLiq = calcularImp (salarioBruto, imp);
        printf ("Salario a receber: R$%.2f\n", salarioLiq);
        break;
    case 2:
        valorPH = 16.0;
        imp = 15;
        salarioBruto = calcularSalarioBruto (valorPH, horas);
        salarioLiq = calcularImp (salarioBruto, imp);
        printf ("Salario a receber: R$%.2f\n", salarioLiq);
        break;
    case 3:
        puts ("Insira o total de vendas dentro das horas inseridas: ");
        scanf ("%d", &vendas);
        valorPH = 8.0;
        imp = 17;
        salarioBruto = calcularSalarioBruto (valorPH, horas);
        salarioLiq = calcularImp (salarioBruto, imp);
        salarioLiq = calcularVendas (salarioLiq, vendas);
        printf ("Salario a receber: R$%.2f\n", salarioLiq);
        break; 
    case 4:
        valorPH = 50.0;
        imp = 27;
        salarioBruto = calcularSalarioBruto (valorPH, horas);
        salarioLiq = calcularImp (salarioBruto, imp);
        printf ("Salario a receber: R$%.2f\n", salarioLiq);
        break;
    case 5:
        valorPH = 120.0;
        imp = 27;
        salarioBruto = calcularSalarioBruto (valorPH, horas);
        salarioLiq = calcularImp (salarioBruto, imp);
        printf ("Salario a receber: R$%.2f\n", salarioLiq);
        break;
    default:
        puts ("Opcao Invalida...");
        break;
    }
    
}