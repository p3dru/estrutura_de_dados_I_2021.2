#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

string nome1;
string nome2;
int resultado;
		
main()
{
	cout<<"Digite a primeira string: ";
	cin>>nome1;
	cout<<"Digite a segunda string: ";
	cin>>nome2;	
	int tamanho_1 = nome1.length(); //descobre o tamanho da string nome1
	int tamanho_2 = nome2.length(); //descobre o tamanho da string nome2
	char nome_1[tamanho_1 + 1];     //cria um char nome_1 com o tamanho da string nome1 + 1
	strcpy(nome_1, nome1.c_str());  //copia o conteudo da string nome1 com nome1.c_str(); para o char nome_1
	char nome_2[tamanho_2 + 1];     //cria um char nome_2 com o tamanho da string nome2 + 1
	strcpy(nome_2, nome2.c_str());  //copia o conteudo da string nome2 com nome2.c_str(); para o char nome_2
	
	resultado = strcmp(nome_1, nome_2); //faz a comparacao usando strcmp(agora com chars)
	
	if(resultado == 0) //verifica
	{
		printf("\nSao iguais");
	}
	else
	{
		printf("\nSao diferentes");
	}	
} 
