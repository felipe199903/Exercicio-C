/* Exercício: Programa que recebe 3 valores int num vetor int, e ordena-se
					esses valores no vetor. */
					
#include <stdio.h>
#include <string.h>

int main(){
	
	int vet[3], i, temp;
	
	for(i=0;i<3;i++){
		scanf("%d", &vet[i]);
	}
	
	if(vet[0] > vet[1]){
		temp = vet[0];
		vet[0] = vet[1];
		vet[1] = temp;
	}
	
	if(vet[1] > vet[2]){
		temp = vet[1];
		vet[1] = vet[2];
		vet[2] = temp;
	}
	
	if(vet[0] > vet[1]){
		temp = vet[0];
		vet[0] = vet[1];
		vet[1] = temp;
	}

	for(i=0;i<3;i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}
