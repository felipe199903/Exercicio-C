/* Exercício 1: Crie uma função que receba como parâmetro o raio de um círculo
						e retorne a área do círculo. 
						Área = PI*r*r */
						 
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
