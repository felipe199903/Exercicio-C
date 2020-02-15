/* Exercício: Programa que captura 10 nomes de alunos e troca
					todas as vogais por '*' */
	
#include <stdio.h>
#include <string.h>

int main(){

	char str[10][26];
	int i, linha;
	
	puts("Digite os 10 nomes");
	for(i=0;i<10;i++){
		gets(str[i]);
	}
	
	for(linha = 0; linha < 10; linha++){
		for(i=0;i<strlen(str[linha]);i++){
			if(str[linha][i] == 'a' ||
				str[linha][i] == 'e' ||
				str[linha][i] == 'i' ||
				str[linha][i] == 'o' ||
				str[linha][i] == 'u'){
					conta++;
			}
		}
	}
	
	puts("Resultado da string");
	for(linha=0;linha<10;linha++){
		puts(str[linha]);
	}

	
	return 0;
}
