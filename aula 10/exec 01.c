/* Exercício: Programa que recebe 10 strings de tamanho máximo 20, e se conta,
					no total das 10 strings, quantas vogais foram digitadas pelo usuário. */
					
#include <stdio.h>
#include <string.h>

int main(){
	
	char str[10][21];
	int i, j, contvog;
	
	for(i=0;i<10;i++){
		gets(str[i]);
	}
	
	contvog=0;
	for(i=0;i<10;i++){
		//for(j=0;str[0]!='\0';j++){
		for(j=0;j<strlen(str[i]);j++){
			if(str[i][j] == 'a' ||
				str[i][j] == 'e' ||
				str[i][j] == 'i' ||
				str[i][j] == 'o' ||
				str[i][j] == 'u'){
					contvog++;
			}
		}
	}
	
	printf("As strings tem %d vogais.\n", contvog);
	
	
	
	return 0;
}
