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
					
#include <stdio.h>
#include <string.h>

int main(){
	
	char strnome [30], strRA[15], strMedia[10], strPrint[150];
	
	puts("Digite o nome, RA e media");
	gets(strnome);
	gets(strRA);
	gets(strMedia);
	
	strcpy(strPrint, "/*********************************\n");
	strcat(strPrint, "Nome: ");
	strcat(strPrint, strnome);
	strcat(strPrint, "\n");
	strcat(strPrint, "RA: ");
	strcat(strPrint, strRA);
	strcat(strPrint, "\n");	
	strcat(strPrint, "Media: ");
	strcat(strPrint, strMedia);
	strcat(strPrint, "\n");
	strcat(strPrint, "*********************************/");
	
	puts(strPrint);
	
	return 0;
}
