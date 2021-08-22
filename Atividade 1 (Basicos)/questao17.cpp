#include <stdio.h>
#include <stdlib.h>

main()
{
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%s", &letra);
	
	if (letra == 'm' || letra == 'M')
	{
		printf("Bom dia");
	}
	else if(letra == 'v' || letra == 'V')
	{
		printf("Boa tarde");
	}
	else if(letra == 'n' || letra == 'N')
	{
		printf("Boa noite");
	}
	else
	{
		printf("Valor invalido");
	}
}
