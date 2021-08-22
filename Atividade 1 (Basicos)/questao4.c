#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero, centenas, dezenas, unidades, soma;
	
	printf("Digite um numero de 3 digitos: ");
	scanf("%i", &numero);
	
	centenas = numero / 100;
	dezenas = (numero % 100) / 10;
	unidades = (numero % 100) % 10;
	
	soma =  centenas + dezenas + unidades;
	
	printf("A soma das centenas, dezenas e unidades eh de %i", soma);
	printf("\n");
	
	system("pause");
}
