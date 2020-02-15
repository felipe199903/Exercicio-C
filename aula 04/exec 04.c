/* Exemplo: Programa que soma os valores entre 1 e 100 

				SOMA = 1 + 2 + 3 + 4 + ... + 99 + 100
					*/
				
#include <stdio.h>

int main(){

	int i, soma;
	
	
	soma = 0;
	i=1;
	while(i<=100){
		
		soma = soma + i;
		
		/*printf("Soma parcial = %d", soma);
		getchar();*/
		
		i++;
	
	}
	
	printf("Soma final = %d\n", soma);
	
	printf("Soma PA = %d\n", (1+100)*100/2);
		
	return 0;

}
