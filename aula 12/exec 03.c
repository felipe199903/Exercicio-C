/* Exerc�cio: Complemente o c�digo da calculadora separada em fun��es vista em sala
					de aula.
					
					Coment�rio: apenas implementada a fun��o subtra��o.
					
					Termine em casa.  */
					
#include <stdio.h>

//Prot�tipos das fun��es
int soma(int x1, int x2);
int sub(int x1, int x2);

int main(){

	int a, b, res;
	
	scanf("%d%d", &a, &b);
	
	//Chamada da fun��o
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
