#include <stdio.h>
#include <stdlib.h>

main()
{
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%s", &letra);
	
	if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O'|| letra == 'u' || letra == 'U')
	{
		printf("A letra digitada eh vogal");
	}
	else
	{
		printf("A letra digitada eh consoante");
	}
}
