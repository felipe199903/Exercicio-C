/* Exercício: Programa que captura 5 valores do usuário, guarda num vetor, soma os 
					valores e calcula a média. Sempre usando um ponteiro para um vetor */

#include <stdio.h>

int main(){
	
	int vet[5], i, soma;
	int *p;
	
	p=vet;
	
	for(i=0;i<5;i++){
		
		scanf("%d", p+i);
		
	}
	
	soma=0;
	for(i=0;i<5;i++){
		
		soma = soma + *(p+i);
		
	}
	
	soma=soma/5;
	
	printf("Media = %d\n", soma);
			
	return 0;
}
