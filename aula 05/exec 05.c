/* Exercício: Programa que fica preso em loop infinito, ou seja, não termina
				  enquanto o usuário não digitar a senha correta (123456) */
				  
#include<stdio.h>
#define SENHA 123456

int main(){
	
	int n;
	
	do{
		printf("Digite a senha para encerrar o programa\n");
		scanf("%d", &n);
		
	}while(SENHA!=n);
	
	return 0;
}
