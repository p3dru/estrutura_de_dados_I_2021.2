#include <stdio.h>
#include <stdlib.h>

main()
{
	float reais, dolar_preco;
	int dolar_quantidade;
	
	printf("Digite o preco do dolar: ");
	scanf("%f", &dolar_preco);
	printf("Digite a quantidade de dolar: ");
	scanf("%i", &dolar_quantidade);
	
	reais = dolar_preco * dolar_quantidade;
	
	printf("%i dolares sao %.2f reais", dolar_quantidade, reais);
	
	system("pause");
}
