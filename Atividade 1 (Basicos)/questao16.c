#include <stdio.h>
#include <stdlib.h>

main()
{
	float produto1, produto2, produto3;
	
	printf("Digite o valor do primeiro produto: ");
	scanf("%f", &produto1);
	printf("Digite o valor do segundo produto: ");
	scanf("%f", &produto2);
	printf("Digite o valor do terceiro produto: ");
	scanf("%f", &produto3);
	
	if(produto1 < produto2 && produto1 < produto3)
	{
		printf("O produto a ser comparado é o produto 1");
	}
	if(produto2 < produto1 && produto2 < produto3)
	{
		printf("O produto a ser comparado é o produto 2");
	}
	if(produto3 < produto2 && produto3 < produto1)
	{
		printf("O produto a ser comparado é o produto 3");
	}
	
	printf("\n");
	system("pause");
}
