#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador, tamanho;
	printf("Digite o tamanho dos vetores: ");
	scanf("%i", &tamanho);
	
	int vetor_a[tamanho], vetor_b[tamanho], vetor_c[tamanho * 2];
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		printf("Digite o valor de vetor_a[%i]: ", contador);
		scanf("%i", &vetor_a[contador]);
	}	
	
	printf("\n");
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		printf("Digite o valor de vetor_b[%i]: ", contador);
		scanf("%i", &vetor_b[contador]);
	}	
	
	for(contador = 0; contador < tamanho * 2; contador ++)
	{
		if(contador < tamanho)
		{
			vetor_c[contador] = vetor_a[contador];
		}
		else
		{
			vetor_c[contador] = vetor_b[contador - tamanho];
		}
	}
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		printf("\nVetor_a[%i]: %i", contador, vetor_a[contador]);
	}
	
	printf("\n");
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		printf("\nVetor_b[%i]: %i", contador, vetor_b[contador]);
	}
	
	printf("\n");
	
	for(contador = 0; contador < tamanho * 2; contador ++)
	{
		printf("\nVetor_c[%i]: %i", contador, vetor_c[contador]);
	}
	
}  
