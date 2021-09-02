#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador, tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tamanho);
	
	int fibonacci[tamanho];
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	fibonacci[2] = 1;
	
	for(contador = 3; contador < tamanho; contador ++)
	{
		fibonacci[contador] = fibonacci[contador - 1] + fibonacci[contador - 2];
	}
	
	printf("\nSequencia fibonacci de %i termos: ", tamanho);
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		printf("%i ", fibonacci[contador]);
	}
}
