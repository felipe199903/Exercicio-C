/* Exerc�cio: Exemplo de calculadora com passagem de par�metro por refer�ncia */
						 
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
