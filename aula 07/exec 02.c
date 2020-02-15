/* Exercício: Programa que que copia os valores de um vetor A para um vetor B
					(ambos de tamanho 10). */

#include <stdio.h>

int main(){
	
	int A[10] = {4, 2, 1, 3, 4, 5, 9, 10, 0, 1};
	int B[10], i;
	
	for(i=0;i<10;i++){
		B[i] = A[i];
	}
	
	printf("Vetor resultante:\n");
	for(i=0;i<10;i++){
		printf("%d ", B[i]);
	}	
	
	return 0;
}
