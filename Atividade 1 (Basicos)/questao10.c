#include <stdio.h>
#include <stdlib.h>

main()
{
	float nota1, nota2, media, prova_final;
	
	printf("Digite o valor da primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite o valor da segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media >= 7)
	{
		printf("Aprovado");
	}
	else
	{
		printf("Digite o valor da prova final: ");
		scanf("%f", &prova_final);
		
		media = (media + prova_final) / 2;
		
		if (media >= 6)
		{
			printf("Aprovado");
		}
		else
		{
			printf("Reprovado");
		}
	}
	
	printf("\n");
	
	system("pause");
}
