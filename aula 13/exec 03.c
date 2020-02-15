/* Exercício: Função que recebe 3 valores inteiros e retorna o maior deles. */
						 
#include <stdio.h>

int maior(int a, int b, int c);


int main(){
	
	int x, y, z, m;
	
	scanf("%d%d%d", &x, &y, &z);
	
	m = maior(x, y, z);
	
	printf("Maior = %d", m);
	
	return 0;
}

int maior(int a, int b, int c){
	
	if(a > b && a > c)
		return a;
		
	if (b > a && b > c)
		return b;
		
	if (c > a && c > b)
		return c;
		
}
