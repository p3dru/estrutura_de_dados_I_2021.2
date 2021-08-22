#include <stdio.h>
#include <stdlib.h>

main()
{
	int matricula, aprovados, reprovados = 0, total_de_alunos;
	float nota_1, nota_2, nota_3, media_final;
	
	printf("Digite a matricula: ");
	scanf("%i", &matricula);
	
	
	while(matricula != 0)
	{
		printf("Digite a primeira nota: ");
		scanf("%f", &nota_1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota_2);
		printf("Digite a terceira nota: ");
		scanf("%f", &nota_3);
		
		media_final = ((nota_1 * 2) + (nota_2 * 3) + (nota_3 * 5)) / 10;
		
		if(media_final >= 7)
		{
			printf("Aluno aprovado!");
			aprovados += 1;
		}
		else
		{
			printf("Aluno reprovado!");
			reprovados += 1;
		}
		
		printf("\n\nDigite a matricula: ");
		scanf("%i", &matricula);
	
	}
	
	printf("\n\nO total de alunos aprovados foi de %i alunos", aprovados);
	printf("\nO total de alunos reprovados foi de %i alunos", reprovados);
	total_de_alunos = aprovados + reprovados;
	printf("\nAo total são %i alunos", total_de_alunos);
}
