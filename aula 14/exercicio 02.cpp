#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&a);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&b);
	
	if(a%b==0){
		printf("%d e multiplo de %d\n",a,b);
	}
	else{
		printf("Nao sao multiplos\n");
	}
	
	return 0;
}
