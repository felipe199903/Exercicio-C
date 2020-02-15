/* Exercício: Programa que captura 10 valores do usuário, guarda num vetor e mostra na 
					tela o maior valor.
					Acesse o vetor somente por ponteiro. */
					
					
#include <stdio.h>

int main(){
	
	int vet[10], *p, i, maior;
	
	p=vet;
	
	for(i=0;i<10;i++,p++){
		scanf("%d",p);
	}
	
	p=vet;
	
	maior=*p;
	for(i=1;i<10;i++){
		p++;
		if(*p > maior){
			maior = *p;
		}
	}
	
	printf("Maior valor = %d\n", maior);
	
	return 0;
	
	
	
}
