/* Exerc�cio: Fun��o que recebe um n�mero entre 1 e 7 e imprime na tela
					o dia da semana correspondente. */
						 
#include <stdio.h>

void maior(int num);


int main(){
	
	int a;
	
	scanf("%d", &a);
	
	maior(a);
	
	return 0;
}

void maior(int num){

	switch(num){
		case 1:
		printf("Domingo\n");
		break;
		case 2:
		printf("Segunda-feira\n");
		break;
		case 3:
		printf("Terca-feira\n");
		break;
		case 4:
		printf("Quarta-feira\n");
		break;
		case 5:
		printf("Quinta-feira\n");
		break;
		case 6:
		printf("Sexta-feira\n");
		break;
		case 7:
		printf("Sabado\n");
		break;
	}
}
