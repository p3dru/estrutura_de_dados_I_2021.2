#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, contador;
	printf("Digite tamanho do vetor: ");
	scanf("%i", &n);
	
	int vetor_a[n];
	int vetor_b[n];
	
	for(contador = 0; contador < n; contador ++)
	{
		printf("Digite o valor da posicao %i: ", contador);
		scanf("%i", &vetor_a[contador]);
	}
	
	for(contador = 0; contador < n; contador ++)
	{
		if(contador == 0)
		{
			vetor_b[contador] = vetor_a[n - (contador + 1)];
		}
		else
		{
			vetor_b[contador] = vetor_a[n - (contador + 1)];
		}
	}
	
	
	for(contador = 0; contador < n; contador ++)
	{
		printf("\nVetor_a[%i]: %i", contador, vetor_a[contador]);
	}
	
	printf("\n");
	
	for(contador = 0; contador < n; contador ++)
	{
		printf("\nVetor_b[%i]: %i", contador, vetor_b[contador]);
	}
	
}
