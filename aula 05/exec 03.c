/* Exercício: Escreva um programa em que o usuário digita 10 valores e se imprime na tela
				  quantos são pares e quantos são ímpares. */
		
#include<stdio.h>
				  
#define TAM 10

int main(){
	
	int i, contpar, contimpar, n;
	
	contpar=0;
	contimpar=0;
	
	i=1;
	while(i<=TAM){
		
		printf("Digite um numero\n");
		scanf("%d", &n);
		
		if(n%2==0){
			contpar++;
		}else{
			contimpar++;
		}
		
		i++;
	}
	
	printf("Numeros pares: %d\nNumeros impares: %d", contpar, contimpar);
	
	return 0;
	
	
}
