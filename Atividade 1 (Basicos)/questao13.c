#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if(numero >= 0)
	{
		printf("O numero eh positivo");
	}
	else
	{
		printf("O numero eh negativo");
	}
	
	printf("\n");
	system("pause");
	
}
