#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero1, numero2, numero3;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%i", &numero2);
	printf("Digite o terceiro numero: ");
	scanf("%i", &numero3);
	
	if(numero1 > numero2 && numero1 > numero3 && numero2 > numero3)
	{
		printf("Maior: %i\nMenor: %i", numero1, numero3);
	}
	if(numero1 > numero2 && numero1 > numero3 && numero3 > numero2)
	{
		printf("Maior: %i\nMenor: %i", numero1, numero2);
	}
	if(numero2 > numero1 && numero2 > numero3 && numero1 > numero3)
	{
		printf("Maior: %i\nMenor: %i", numero2, numero3);
	}
	if(numero2 > numero1 && numero2 > numero3 && numero3 > numero1)
	{
		printf("Maior: %i\nMenor: %i", numero2, numero1);
	}
	if(numero3 > numero2 && numero3 > numero1 && numero2 > numero1)
	{
		printf("Maior: %i\nMenor: %i", numero3, numero1);
	}
	if(numero3 > numero2 && numero3 > numero1 && numero1 > numero2)
	{
		printf("Maior: %i\nMenor: %i", numero3, numero2);
	}
	printf("\n");
	
	system("pause");
}
