#include <stdio.h>
#include <stdlib.h>

main()
{
	int voto;
	float total, dilma, ciro, serra, indeciso, outros, nulo_branco;
	float por_100_ciro, por_100_dilma, por_100_serra, por_100_indeciso, por_100_outros, por_100_nulo_branco;
	
	printf("Seu voto: ");
	scanf("%i", &voto);
	
	while(voto != -1)
	{
		switch(voto)
		{
			case 13:
				dilma += 1;
				total += 1;
				break;
			case 23:
				ciro += 1;
				total += 1;
				break;
			case 45:
				serra += 1;
				total += 1;
				break;
			case 99:
				indeciso += 1;
				total += 1;
				break;
			case 98:
				outros += 1;
				total += 1;
				break;
			case 0:
				nulo_branco += 1;
				total += 1;
				break;	
		}

		printf("\nSeu voto: ");
		scanf("%i", &voto);
	}
	
	por_100_ciro = (ciro / total) * 100;
	por_100_dilma = (dilma / total) * 100;
	por_100_serra = (serra / total) * 100;
	por_100_indeciso = (indeciso/ total) * 100;
	por_100_outros = (outros / total) * 100;
	por_100_nulo_branco = (nulo_branco / total) * 100;
	
	
	printf("\n\nCiro teve %.2f por cento das intemcoes de voto.", por_100_ciro);
	printf("\nDilma teve %.2f por cento das intencoes de voto.", por_100_dilma);
	printf("\nSerra teve %.2f por cento das intencoes de voto.", por_100_serra);
	printf("\nIndecisos somam %.2f por cento dos votos.", por_100_indeciso);
	printf("\nOutros somam %.2f por cento dos votos.", por_100_outros);
	printf("\nNulos e brancos somam %.2f por cento dos votos", por_100_nulo_branco);
	
	if(por_100_serra > 50.0 || por_100_dilma > 50.0 || por_100_ciro > 50.0)
	{
		printf("\n\nNao havera segundo turno");
	}
	else
	{
		printf("\n\nHavera segundo turno");
	}
	
}
