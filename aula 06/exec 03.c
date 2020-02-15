/* Exercício: Programa que captura 10 valores do usuário e imprime na ordem inversa
				 */
					
#include <stdio.h>

#define TAM 10

int main(){
	
	int v[TAM], i;
	
	for(i=0;i<TAM;i++){
		scanf("%d", &v[i]);
	}
	
	for(i=TAM-1;i>=0;i--){
		printf("%d ",v[i]);
	}
	
	
	return 0;
}
