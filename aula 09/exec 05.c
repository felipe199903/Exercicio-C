/* Exercício: Programa que captura 10 nomes de alunos e mostra
					na tela quantos nomes começam com a letra 'a' */
	
#include <stdio.h>
#include <string.h>

int main(){

	char str[10][60]; //10 nomes de tamanho máximo 59
	int i, conta;
	
	puts("Digite os 10 nomes dos alunos");
	for(i=0;i<10;i++){
		gets(str[i]);
	}
	
	conta = 0;
	for(i=0;i<10;i++){
		
		if(str[i][0] == 'a' || str[i][0] == 'A'){
			conta++;
		}
		
	}
	
	printf("Temos %d nomes que comecam com A\n", conta);
	
	return 0;
}
