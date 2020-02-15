/* Exercício: Programa que recebe 10 strings e é impresso na tela a menor e a maior
					string. */
					
#include <stdio.h>
#include <string.h>

int main(){
	
	char str[10][11];
	int i, imaior, imenor, posmaior, posmenor; 
	
	for(i=0;i<10;i++){
		gets(str[i]);
	}
	
	//imaior guarda o tamanho da maior string
	imaior=strlen(str[0]);
	//posmaior guarda a posição da maior string
	posmaior=0;
	for(i=1;i<10;i++){
		if(strlen(str[i]) > imaior){
			imaior = strlen(str[i]);
			posmaior = i;
		}
	}
	
	printf("A maior string digitada e: %s\n", str[posmaior]);
	
	//imaior guarda o tamanho da maior string
	imenor=strlen(str[0]);
	//posmaior guarda a posição da maior string
	posmenor=0;
	for(i=1;i<10;i++){
		if(strlen(str[i]) < imenor){
			imenor = strlen(str[i]);
			posmenor = i;
		}
	}
	
	printf("A menor string digitada e: %s", str[posmenor]);
	
	return 0;
}
