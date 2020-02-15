/* Exerc�cio 1: Crie uma fun��o que receba como par�metro o raio de um c�rculo
						e retorne a �rea do c�rculo. 
						�rea = PI*r*r */
						 
#include <stdio.h>
#include <math.h>

#define PI 3.14159

float area(float r);

int main(){
	
	float r, a;
	
	printf("Digite o valor do raio\n");
	scanf("%f", &r);
	
	a = area(r);
	
	printf("Area do circulo = %f\n", a);
	
	return 0;
}

float area (float r){
	
	float resultado;
	
	//pow(r,2) = r*r
	resultado = PI*pow(r,2);
	
	return resultado;
	
}
