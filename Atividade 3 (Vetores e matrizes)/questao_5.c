#include <stdio.h>
#include <stdlib.h>

main()
{
	int tamanho, contador, menor, maior;
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tamanho);
	
	int vetor[tamanho];
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		printf("Digite o valor da posicao vetor[%i]: ", contador);
		scanf("%i", &vetor[contador]);
	}
	
	maior = vetor[0];
	menor = vetor[0];
	
	for(contador = 0; contador < tamanho; contador ++)
	{
		if(vetor[contador] < menor)
		{
			menor = vetor[contador];
		}
		
		if(vetor[contador] > maior)
		{
			maior = vetor[contador];
		}
	}
	
	printf("\nO maior valor lido foi: %i", maior);
	printf("\nO menor valor lido foi: %i", menor);

}
