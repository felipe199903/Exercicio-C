/* Exercício: Exemplo de calculadora com passagem de parâmetro por referência */
						 
#include <stdio.h>

void soma(int x, int y, int *res);

int main(){
	
	int x, y, resultado;
	
	scanf("%d%d", &x, &y);
	
	soma(x, y, &resultado);
	
	printf("Resultado = %d", resultado);
	
	return 0;
}

void soma (int x, int y, int *res){
	
	*res = x + y;
	
}
