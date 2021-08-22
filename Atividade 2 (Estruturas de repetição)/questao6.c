#include <stdio.h>
#include <stdlib.h>

main()
{
	float salario, aumento, novo_salario, soma_reajustados, soma_atuais, diferenca_entre_somas;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	while(salario != 0)
	{
		if(salario > 0 && salario < 3000)
		{
			soma_atuais += salario;
			aumento = (salario * 25) / 100;
			novo_salario = salario + aumento;
			soma_reajustados += novo_salario;
			printf("\nO novo salário eh R$%.2f", novo_salario);
			printf("\nA soma dos salarios atuais eh %.2f", soma_atuais);
			printf("\nA soma dos salarios ajustados eh %.2f", soma_reajustados);
			diferenca_entre_somas = soma_reajustados - soma_atuais;
			printf("\nA diferença entre as somas eh de R$%.2f", diferenca_entre_somas);		
		}
		else
		{
			if(salario >= 3000 && salario < 6000)
			{
				soma_atuais += salario;
				aumento = (salario * 20) / 100;
				novo_salario = salario + aumento;
				soma_reajustados += novo_salario;
				printf("\nO novo salário eh R$%.2f", novo_salario);
				printf("\nA soma dos salarios atuais eh %.2f", soma_atuais);
				printf("\nA soma dos salarios ajustados eh %.2f", soma_reajustados);
				diferenca_entre_somas = soma_reajustados - soma_atuais;
				printf("\nA diferença entre as somas eh de R$%.2f", diferenca_entre_somas);
			}
			else
			{
				if(salario >= 6000 && salario < 10000)
				{
					soma_atuais += salario;
					aumento = (salario * 15) / 100;
					novo_salario = salario + aumento;
					soma_reajustados += novo_salario;
					printf("\nO novo salário eh R$%.2f", novo_salario);
					printf("\nA soma dos salarios atuais eh %.2f", soma_atuais);
					printf("\nA soma dos salarios ajustados eh %.2f", soma_reajustados);
					diferenca_entre_somas = soma_reajustados - soma_atuais;
					printf("\nA diferença entre as somas eh de R$%.2f", diferenca_entre_somas);
				}
				else
				{
					if(salario >= 10000)
					{
						soma_atuais += salario;
						aumento = (salario * 10) / 100;
						novo_salario = salario + aumento;
						soma_reajustados += novo_salario;	
						printf("\nO novo salário eh R$%.2f", novo_salario);
						printf("\nA soma dos salarios atuais eh %.2f", soma_atuais);
						printf("\nA soma dos salarios ajustados eh %.2f", soma_reajustados);
						diferenca_entre_somas = soma_reajustados - soma_atuais;
						printf("\nA diferença entre as somas eh de R$%.2f", diferenca_entre_somas);
					}
				}
			}
		}
		
		
	printf("\n\nDigite o valor do salario: ");
	scanf("%f", &salario);
	}
}
