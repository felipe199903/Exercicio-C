#include<stdio.h>
/*2) Faça um programa que leia 10 valores e no final, informe o maior e o menor valor digitado.*/

int main(){
	
int i, a[10], contmaior, contmenor;

printf("Digite dez numeros\n");

for(i=0;i<10;i++){
scanf("%d", &a[i]);

	}
contmaior = a[0];
for(i=0;i<10;i++){
	if(contmaior < a[i]){
		contmaior = a[i];
	}
}	

contmenor = a[0];
for(i=0;i<10;i++){
	if(contmenor > a[i]){
		contmenor = a[i];
	}
}	

printf("o maior numero e %d\n", contmaior);
printf("o menor numero e %d\n", contmenor);

	
	
	return 0;
}
