#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//comparar strings letra a letra
main()
{
	char nome1[20];
	char nome2[20];
	int resultado, tamanho_1, tamanho_2, contador = 0, i;
	
	printf("Digite a string 1: ");
	scanf("%s", nome1);
	
	printf("Digite a string 2: ");
	scanf("%s", nome2);
	
	tamanho_1 = strlen(nome1);
	tamanho_2 = strlen(nome2);
	
	if(tamanho_1 != tamanho_2)
	{
		printf("Sao diferentes!");
	}
	else
	{
		for(i = 0; i < tamanho_1; i++) //cria for comecando e i e buscando letra a letra
		{
			if(nome1[i] == nome2[i])
			{
				contador += 1;
			}
		}
		
		if(contador == tamanho_1) //compara se o contador de igualdade eh igual ao tamanho da string
		{
			printf("Sao iguais");
		}
	}
	

}
