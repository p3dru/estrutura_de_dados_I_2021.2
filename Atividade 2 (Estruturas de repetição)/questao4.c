#include <stdio.h>
#include <stdlib.h>

main()
{
	float resultado, x, n;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	printf("Digite o valor de n: ");
	scanf("%f", &n);
	
	while(n > 2)
	{
		resultado = x / n;
		x = resultado;
		n -= 1;
	}
	printf("O resultado das divisoes eh: %.2f", resultado);
	
}
