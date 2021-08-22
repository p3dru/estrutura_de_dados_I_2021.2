#include <stdio.h>
#include <stdlib.h>

main()
{
	int dia, mes, ano;
	
	printf("Digite o dia: ");
	scanf("%i", &dia);
	printf("Digite o mes: ");
	scanf("%i", &mes);
	printf("Digite o ano: ");
	scanf("%i", &ano);
	
	if(ano % 4 == 0)
	{
		if (mes == 2)
		{
			if (dia <= 29 && dia > 0)
			{
				printf("Data valida");
			}
			else
			{
				printf("Data invalida");
			}
		}
		else
		{
			if (dia < 32 && dia > 0)
			{
				printf("Data valida");
			}
			else
			{
				printf("Data invalida");
			}
		}
	}
	else
	{
		if (mes == 2)
		{
			if (dia <= 28 && dia > 0)
			{
				printf("Data valida");
			}
			else
			{
				printf("Data invalida");
			}
		}
		else
		{
			if (dia < 32 && dia > 0)
			{
				printf("Data valida");
			}
			else
			{
				printf("Data invalida");
			}
		}
	}	
	printf("\n");
	
	system("pause");
}
