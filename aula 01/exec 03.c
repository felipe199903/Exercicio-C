/* Exemplo: Programa que captura 2 valores do usuário, e mostra na tela a soma,
				subtração, multiplicação e divisão */

#include <stdio.h>
int main(){

	float n1, n2, soma, sub, mult, divi;
	
	printf("Digite 2 valores\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub  = n1 - n2;
	mult = n1 * n2;
	divi = n1 / n2;
	
	printf("A soma vale: %f\n", soma);
	printf("A subtracao vale: %f\n", sub);
	printf("A multiplicacao vale: %f\n", mult);
	printf("A divisao vale: %f\n", divi);
	
	return 0;

}
