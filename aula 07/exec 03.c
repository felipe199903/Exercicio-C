/* Exerc�cio: Programa que que captura 10 valores do usu�rio, guarda num vetor, e depois
					imprime na tela quantos s�o maiores e quantos s�o menores que 6. */

#include <stdio.h>

int main(){
	
	int A[10], i, contmaior, contmenor;
	
	for(i=0;i<10;i++){
		scanf("%d", &A[i]);
	}
	
	contmaior = 0;
	contmenor = 0;
	for(i=0;i<10;i++){
		if(A[i] >= 6){
			contmaior++;
		}else{
			contmenor++;
		}
	}	
	
	printf("Resultado: %d sao maiores que 6 e %d sao menores\n", contmaior, contmenor);
	
	return 0;
}

