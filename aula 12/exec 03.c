/* Exercício: Complemente o código da calculadora separada em funções vista em sala
					de aula.
					
					Comentário: apenas implementada a função subtração.
					
					Termine em casa.  */
					
#include <stdio.h>

//Protótipos das funções
int soma(int x1, int x2);
int sub(int x1, int x2);

int main(){

	int a, b, res;
	
	scanf("%d%d", &a, &b);
	
	//Chamada da função
	res = soma(a, b);

	printf("Resultado = %d\n", res);
	
	return 0;
	
}

int soma(int x1, int x2){
	
	int resultado;
	
	resultado = x1 + x2;
	
	return resultado;	
	
}

int sub(int x1, int x2){
	
	int resultado;
	
	resultado = x1 - x2;
	
	return resultado;	
	
}
