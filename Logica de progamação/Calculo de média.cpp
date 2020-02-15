#include <stdio.h>
int main ()
{

	float a, b, m;

	printf("Programa que calcula a media.\n\n");
	
	printf("digite o primeiro valor:\n");
	scanf("%f",&a);
	
	printf("digite o segundo valor:\n");
	scanf("%f",&b);
	
	m = (a+b)/2;
	printf("\n\nMedia do aluno e:%0.1f. Continue estudando", m);
	
	return 0;
	

}
