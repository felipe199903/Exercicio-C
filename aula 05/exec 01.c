/* Exercício: Escreva um programa que imprime na tela os números pares entre 1 e n
				  (n digitado pelo usuário). */
				  
#include <stdio.h>

int main(){
	
	int i, n;
	
	printf("Digite o valor de n\n");
	scanf("%d",&n);
	
	/*i=1;
	while(i<=n){
		if(i%2==0){
			printf("%d\n", i);
		}
		i++;
	}*/
	
	i=2;
	while(i<=n){
		printf("%d\n", i);
		i+=2;
	}
	
	return 0;
}
