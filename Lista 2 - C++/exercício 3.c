/* 3) Desenvolver um algoritmo e um programa em C que efetue a soma de todos os números ímpares
que são múltiplos de três e que se encontram no conjunto dos números de 1 até 500.
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

