#include <stdio.h>
#include <stdlib.h>

main()
{
	int dia1, mes1, ano1, dia2, mes2, ano2, data1, data2;
	
	printf("Digite o dia da primeira data: ");
	scanf("%i", &dia1);
	printf("Digite o mes da primeira data: ");
	scanf("%i", &mes1);
	printf("Digite o ano da primeira data: ");
	scanf("%i", &ano1);
	printf("Digite o dia da segunda data: ");
	scanf("%i", &dia2);
	printf("Digite o mes da segunda data: ");
	scanf("%i", &mes2);
	printf("Digite o ano da segunda data: ");
	scanf("%i", &ano2);
	
	data1 = dia1 + (mes1*30) + (ano1*365);
	data2 = dia2 + (mes2*30) + (ano2*365);
	
	if(data1 > data2)
	{
		printf("A data mais recente eh a %i/%i/%i", dia1, mes1, ano1);
	}
	else
	{
		printf("A data mais recente eh a %i/%i/%i", dia2, mes2, ano2);
	}
	
	printf("\n");
	
	system("pause");
}
