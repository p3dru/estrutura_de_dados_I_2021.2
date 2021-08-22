#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero, dezenas, unidades;
	
	printf("Digite um numero de dois digitos: ");
	scanf("%i", &numero);
	
	dezenas = numero / 10;
	unidades = numero % 10;
	
	if(dezenas == unidades)
	{
		printf("As dezenas sao iguais as unidades");
	}
	else
	{
		printf("As dezenas nao sao iguais as unidades");
	}
	printf("\n");
	
	system("pause");
}
