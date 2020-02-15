/* Exercício: Programa que soma dois vetores A e B de tamanho 10 num terceiro vetor C. */

#include <stdio.h>

int main(){
	
	int A[10] = {4, 2, 1, 3, 4, 5, 9, 10, 0, 1};
	int B[10] = {0, 1, 10, 0, 1, 0, 1, 4, 3, 1};
	
	int C[10], i;
	
	for(i=0;i<10;i++){
		C[i] = A[i] + B[i];
	}
	
	printf("Vetor resultante:\n");
	for(i=0;i<10;i++){
		printf("%d ", C[i]);
	}	
	
	return 0;
}
