/* Exerc�cio: Programa que captura 5 valores do usu�rio, guarda num vetor e depois
					imprime tudo na tela. */
					
#include <stdio.h>

int main(){
	
	int vet[5], i;
	
	for(i=0;i<5;i++){
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<5;i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}
