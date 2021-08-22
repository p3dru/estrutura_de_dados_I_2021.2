#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero1, numero2;
	
	printf("Digite o valor do primeiro numero: ");
	scanf("%i", &numero1);
	printf("Digite o valor do segundo numero: ");
	scanf("%i", &numero2);
	
	if(numero1 > numero2)
	{
		printf("O maior numero digitado foi o %i e o menor %i", numero1, numero2);
	}
	else
	{
		printf("O maior numero digitado foi o %i e o menor %i", numero2, numero1);
	}
	printf("\n");
	
	system("pause");
}
