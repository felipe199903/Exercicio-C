/* Exerc�cio: Programa que fica preso em loop infinito, ou seja, n�o termina
				  enquanto o usu�rio n�o digitar a senha correta (123456) */
				  
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
