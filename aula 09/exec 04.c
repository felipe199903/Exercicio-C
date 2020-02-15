/* Exerc�cio: Programa que captura tr�s strings do usu�rio com as informa��es:
					- Nome
					- RA
					- M�dia
					Sendo cada informa��o numa vari�vel string diferente. Depois, concatena-se 
					as strings numa s� para exibi��o na tela, de acordo com o formato abaixo:
					
					/*********************************
					Nome:
					RA:
					M�dia:
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
