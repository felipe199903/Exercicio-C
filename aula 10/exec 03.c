/* Exercício: Mesmo problema anterior, mas considerando um vetor de 3 strings e ordem
					alfabética somente da primeira letra. */
					
#include <stdio.h>
#include <string.h>

int main(){
	
	char str[3][11], temp[11];
	int i;
	
	for(i=0;i<3;i++){
		gets(str[i]);
	}
	
	//Compara-se a posição 0 da string 0, com a pos. 0 da string 1
	if(str[0][0] > str[1][0]){
		strcpy(temp,str[0]);
		strcpy(str[0],str[1]);
		strcpy(str[1],temp);
	}
	
	if(str[1][0] > str[2][0]){
		strcpy(temp,str[1]);
		strcpy(str[1],str[2]);
		strcpy(str[2],temp);
	}
	
	if(str[0][0] > str[1][0]){
		strcpy(temp,str[0]);
		strcpy(str[0],str[1]);
		strcpy(str[1],temp);
	}
	
	for(i=0;i<3;i++){
		puts(str[i]);
	}
	
	return 0;
}
