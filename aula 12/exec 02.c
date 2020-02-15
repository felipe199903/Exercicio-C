/* Exercício: O código abaixo aloca dinamicamente o espaço de um vetor de 10 inteiros:

					int *p;
					p=(int *) malloc (10*sizeof(int));
					
					Inclua a biblioteca <stdlib.h> no código, e use o ponteiro p 
					para capturar 10 valores do usuário. Guarde em outro ponteiro *q o 
					endereço de memória do maior valor digitado pelo usuário.  */
					
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p, *q, i, maior;
	
	p=(int *) malloc(10*sizeof(int));
	
	for(i=0;i<10;i++){
		scanf("%d",p+i);
	}
	
	maior=*p;
	q=p;
	for(i=1;i<10;i++){
		if(*(p+i) > maior){
			maior = *(p+i);
			q=(p+i);
		}
	}
	
	printf("Maior valor = %d\n", *q);
	
	return 0;
	
}
