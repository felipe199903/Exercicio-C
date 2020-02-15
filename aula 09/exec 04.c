/* Exercício: Programa que captura três strings do usuário com as informações:
					- Nome
					- RA
					- Média
					Sendo cada informação numa variável string diferente. Depois, concatena-se 
					as strings numa só para exibição na tela, de acordo com o formato abaixo:
					
					/*********************************
					Nome:
					RA:
					Média:
					*********************************/
					
					/* Usando um vetor de strings */
					
#include <stdio.h>
#include <string.h>

int main(){
	
	// Primeira linha do vetor: Nome, Segunda: RA, terceira: Media
	char strinfo[3][30], strPrint[150];
	
	puts("Digite o nome, RA e media");
	gets(strinfo[0]);
	gets(strinfo[1]);
	gets(strinfo[2]);
	
	strcpy(strPrint, "/*********************************\n");
	strcat(strPrint, "Nome: ");
	strcat(strPrint, strinfo[0]);
	strcat(strPrint, "\n");
	strcat(strPrint, "RA: ");
	strcat(strPrint, strinfo[1]);
	strcat(strPrint, "\n");	
	strcat(strPrint, "Media: ");
	strcat(strPrint, strinfo[2]);
	strcat(strPrint, "\n");
	strcat(strPrint, "*********************************/");
	
	puts(strPrint);
	
	return 0;
}
