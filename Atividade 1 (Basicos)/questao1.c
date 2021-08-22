#include <stdio.h>
#include <stdlib.h>

main()
{
	float velocidade;

	printf("Digite uma velocidade em m/s: ");
	scanf("%f", &velocidade);

	velocidade = velocidade * 3.6;

	printf("\nA velocidade inserida em km/h eh: %.2f\n", velocidade);
	
	system("pause");
}


