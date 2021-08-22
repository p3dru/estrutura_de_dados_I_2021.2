#include <stdio.h>
#include <stdlib.h>

main()
{
	int horas, minutos, minutos_totais;
	
	printf("Digite um valor em horas: ");
	scanf("%i", &horas);
	printf("Digite um valor em minutos: ");
	scanf("%i", &minutos);
	
	minutos_totais = (horas * 60) + minutos;
	
	printf("O valor equivalente em minutos eh de %i", minutos_totais);
	printf("\n");
	system("pause");
}
