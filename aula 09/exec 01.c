/* Exercício: Programa que captura uma string de tamanho máximo 25, troca as vogais 
					pelo caracter '*' e mostra o resultado na tela. */
					
#include <stdio.h>
#include <string.h>

int main(){
	
	char str[26];
	int i;
	
	puts("Digite uma string");
	gets(str);
	
	
	//for(i=0;str[i]!='\0';i++){
	//strlen - retorna o tamanho da string
	for(i=0;i<strlen(str);i++){
		if(str[i] == 'a' ||
			str[i] == 'e' ||
			str[i] == 'i' ||
			str[i] == 'o' ||
			str[i] == 'u'){
				str[i] = '*';
		}
	}
	
	puts("Resultado da string");
	puts(str);
	
	return 0;
}
