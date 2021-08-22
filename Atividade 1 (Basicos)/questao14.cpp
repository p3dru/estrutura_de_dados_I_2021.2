#include <stdio.h>
#include <stdlib.h>

main()
{
	char letra;
	
	printf("Digite um caractere: ");
	scanf("%s", &letra);
	
	if(letra == 'f' || letra == 'F')
	{
		printf("Feminino");
	}
	else if(letra == 'm' || letra == 'M')
	{
		printf("Masculino");
	}
	else
	{
		printf("Sexo inválido");
	}		
}
