#include <stdio.h>

	int main(){

int a, b, c;

printf("Exibir o maior valor\n\n");

	printf("Digite o primeiro valor:\n");
	scanf("%d,", &a);
	
	printf("Digite o segundo valor:\n");
	scanf("%d,", &b);
	
	printf("Digite o terceiro valor\n");
	scanf("%d,", &c);
	
	if(a>b){
		if(a>c)
			printf("Maior valor:%d\n",a);
		else
			printf("Maior valor:%d\n",c);
	}
	
	
	else	 {
		if(b>c)
			printf("Maior valor:%d\n",b);
		else
			printf("Maior valor:%d\n",c);
	};
	
	return 0;


} 
