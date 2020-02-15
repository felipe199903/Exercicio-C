/* Exercício 2 da prova. */

#include <stdio.h>

int main(){
	
	int vet[5], i, soma;
	
	for(i=0;i<5;i++){
		scanf("%d", &vet[i]);
	}
	
	soma=0;
	for(i=0;i<5;i++){
		soma=soma+vet[i];
	}
	
	soma = soma / 5;
		
	return 0;
}
