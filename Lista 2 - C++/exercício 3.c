/* 3) Desenvolver um algoritmo e um programa em C que efetue a soma de todos os n�meros �mpares
que s�o m�ltiplos de tr�s e que se encontram no conjunto dos n�meros de 1 at� 500.
 */

#include <stdio.h>

int main(){
	
int i, a[500], result, div;
result = 0;
for(i=0;i<=500;i++){
	div = i%3;
if(div ==0){
	result = result +i;
}
	}
	
	printf("%d ",result);
	

	
	return 0;
}

