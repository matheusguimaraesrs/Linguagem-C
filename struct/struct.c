#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int		idade;
	char	sexo;
	char	nome[100];
}			pessoa;

int	main(void)
{
	pessoa	matheus;

	matheus.idade = 28;
	matheus.sexo = 'm';
	strcpy(matheus.nome, "Matheus");
	printf("Nome: %s\n", matheus.nome);
	printf("Idade: %d\n", matheus.idade);
	printf("Sexo: %c\n", matheus.sexo);
	printf("\n");
	return (0);
}
