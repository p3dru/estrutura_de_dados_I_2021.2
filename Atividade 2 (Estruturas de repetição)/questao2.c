#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero_1, numero_2, maior, menor, resto, mmc;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &numero_1);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &numero_2);
	
	if(numero_1 > numero_2)
	{
		maior = numero_1;
		menor = numero_2;
	}
	else
	{
		maior = numero_2;
		menor = numero_1;
	}
	
	do
	{
		resto = maior % menor;
		maior = menor;
		menor = resto;
	}while(resto != 0);
	
	mmc = (numero_1 * numero_2) / maior;
	
	printf("O mmc entre %i e %i eh: %i", numero_1, numero_2, mmc);
}

