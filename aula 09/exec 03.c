/* Exerc�cio: Programa que s� termina se o usu�rio digitar a senha correta ("senha123") */
					
#include <stdio.h>
#include <string.h>

int main(){
	
	char senha[10], captura[20];
	
	strcpy(senha, "sucesso");
	
	do{
		printf("Digite a senha\n");
		gets(captura);
		
		
	}while(strcmp(senha, captura) != 0);
	
	return 0;
}
