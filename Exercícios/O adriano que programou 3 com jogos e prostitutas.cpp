#include<stdio.h>
int maior( int x1, int x2, int x3);
int main()
{
	int a, b, c, res;
	
	printf("Digite os valores:");
	scanf("%d%d%d", &a, &b, &c);
	
	res=maior(a, b, c);
	
	printf("O maior e: %d", res);
	
	
	
return 0;

	
}

int maior(int x1, int x2, int x3){
	int resultado;
	
    if( x1 > x2 && x1 > x3){
    	resultado = x1;
	}else if( x2 > x1 && x2 > x3){
		resultado = x2;
	}else if(x3 > x1 && x3 > x2){
		resultado = x3;
	}
	return resultado;
}
	

