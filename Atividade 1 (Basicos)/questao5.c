#include <stdio.h>
#include <stdlib.h>

main()
{
	float velocidade;
	
	printf("Digite uma velocidade em km/h: ");
	scanf("%f", &velocidade);
	
	velocidade = velocidade / 3.6;
	
	printf("A velocidade inserida corresponde a %.2f em m/s", velocidade);
	printf("\n");
	
	system("pause");
}
