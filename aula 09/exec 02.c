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
