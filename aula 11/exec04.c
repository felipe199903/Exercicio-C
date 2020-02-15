/* Exercício: Programa que verifica quantos valores são maiores do que 10 num vetor. */

#include <stdio.h>

int main(){
	
	int vet[10] = {20, 2, 14, 1, 9, 8, 53, 3, 4, 10};
	int *p, i, cont;
	
	p=vet;
	cont=0;
	for(i=0;i<10;i++){
		if(*p>10){
			cont++;
		}
		p++;
	}
	
	printf("Temos %d numeros maiores que 10\n", cont);
	
	return 0;
}
