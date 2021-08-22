#include <stdio.h>
#include <stdlib.h>


// descobrir digitos de numeros;

main()
{
	int numero, numero_masc, resto, digitos;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	numero_masc = numero;
	
	if (numero < 10)
	{
		digitos = 1;
	}
	else
	{
		digitos = 1;
		while(numero_masc >= 10)
		{
			numero_masc = numero_masc / 10;
			digitos += 1;
		}
	}
	
	printf("O numero %i possui %i digitos", numero, digitos);
}
