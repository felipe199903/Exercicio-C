/* Exemplo: Programa que imprime na tela os numeros entre 1 e n,
				sendo n digitado pelo usuário */
				
#include <stdio.h>

int main(){
	
	int i, n;
	
	printf("Digite o valor de n\n");
	scanf("%d", &n);
	
	i=1;
	while(i<=n){
		
		printf("%d\n", i);	
		i++;
	
	}
		
	return 0;
}
