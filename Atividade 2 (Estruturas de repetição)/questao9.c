#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char nome1[20];
	char nome2[20];
	int resultado;
	
	printf("Digite a string 1: ");
	scanf("%s", nome1);
	printf("Digite a string 2: ");
	scanf("%s", nome2);
	
	resultado = strcmp(nome1, nome2);
	
	if(resultado == 0)
	{
		printf("As strings sao iguais");
	}
	else
	{
		printf("As strings sao diferentes");
	}
}
