/* Exercício: Função que recebe um vetor de tamanho 10, e mostra na tela o maior deles. */
						 
#include <stdio.h>

void maior(int *num);

int main(){
	
	int vetor[10], i;
	
	for(i=0;i<10;i++){
		scanf("%d", &vetor[i]);
	}
	
	maior(vetor);
	
	return 0;
}

void maior(int *num){
	
	int i, m;
	
	m = num[0];
	for(i=1;i<10;i++){
		if(num[i] > m)
			m = num[i];
	}
	
	printf("Maior valor = %d\n", m);
	
}
