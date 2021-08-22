#include <stdlib.h>
#include <stdio.h>

main()
{
	int valor1, valor2, opcao;
	float resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%i", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%i", &valor2);
	
	printf("Opcoes\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao");
	printf("\n\nDigite a opcao que deseja:");
	scanf("%i", &opcao);
	
	switch(opcao)
	{
		case 1:
			{
				resultado = valor1 + valor2;
				printf("O resultado da operacao eh: %.2f", resultado);
				break;
			}
		case 2:
			{
				resultado = valor1 - valor2;
				printf("O resultado da operacao eh: %.2f", resultado);
				break;
			}
		case 3:
			{
				resultado = valor1 * valor2;
				printf("O resultado da operacao eh: %.2f", resultado);
				break;
			}
		case 4:
			{
				resultado = valor1 / valor2;
				printf("O resultado da operacao eh: %.2f", resultado);
				break;
			}
	}
	printf("\n");
	
	system("pause");
}
