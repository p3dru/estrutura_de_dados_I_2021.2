#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador, tamanho;
	printf("Tamanho do vetor: ");
	scanf("%i", &tamanho);
	
	int vetor_a[tamanho], vetor_b[tamanho];
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		printf("Digite o valor de vetor_a[%i]: ", contador);
		scanf("%i", &vetor_a[contador]);
		
		if(vetor_a[contador] % 2 == 0)
		{
			vetor_b[contador] = 0;
		}
		else
		{
			vetor_b[contador] = 1;
		}
	}
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		printf("\nVetor_a[%i]: %i    ||    Vetor_b[%i]: %i", contador, vetor_a[contador], contador, vetor_b[contador]);
	}	
}
