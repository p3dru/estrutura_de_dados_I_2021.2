#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero_1, numero_2, mdc, resto_1, resto_2;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &numero_1);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &numero_2);
	
	if(numero_1 > numero_2)
	{
		mdc = numero_2;
	}
	else
	{
		mdc = numero_1;
	}
	
	do
	{
		mdc -= 1;
		resto_1 = numero_1 % mdc;
		resto_2 = numero_2 % mdc;
	}while(resto_1 != resto_2);
	
	printf("O mdc entre %i e %i eh: %i", numero_1, numero_2, mdc);
}
