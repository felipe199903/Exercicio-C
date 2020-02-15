#include <stdio.h>


int main(){
	
	int a, b, r;
	printf("Digite dois valores inteiros:  ");
	scanf("%d %d", &a, &b);
	
	do{
		r=a%b;
		a= b;
		b= r;
		
		
	}while(r!=0);
	
	printf("\n\n MDC de A e B: %d",a);
	
	
	
	
	
	return 0;
}
