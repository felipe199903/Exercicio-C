/* Exercício: Programa que calcula a multiplicação entre 1 e n (fatorial).
				  Exemplo: 5! = 5.4.3.2.1 = 120 */
				  
#include<stdio.h>

int main(){
	
	int i, fat, n;
	
	printf("Digite o valor de n\n");
	scanf("%d", &n);
	
	fat = 1;
	i=1;
	/*while(i<=n){
		
		fat = fat * i; //fat*=i;
				
		i++;
	
	}*/
	
	for(i=1;i<=n;i++){
		fat = fat * i;
	}
	
	printf("%d ! = %d\n", n, fat);
			
	return 0;
}
