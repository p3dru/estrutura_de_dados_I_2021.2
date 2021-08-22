#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero, contador;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
			
	while(numero != 0)
	{
		printf("\nDivisores de %i: ", numero); 
		contador = 1;
		
		while(contador <= numero)
		{
			if (numero % contador == 0)
			{
				printf("\n");
				printf("%i ", contador);
				contador ++;
			}
			else
			{
				contador ++;
			}
		}
		
		printf("\n\nDigite um numero: ");
		scanf("%i", &numero);
	}
}
