/* Exercício: Complemente a calculadora básica vista em sala de aula para que
				  quando o usuário digitar 's' na operação, o programa termine. */
				  
#include <stdio.h>

int main(){
	
	float n1, n2, res;
	char op;
	
	while(1==1){
	
		printf("Digite o primeiro numero\n");
		scanf("%f", &n1);
		getchar();
		
		printf("Digite a operacao\n");
		scanf("%c", &op);
		
		printf("Digite o segundo numero\n");
		scanf("%f", &n2);
		
		switch(op){
			case '+':	
				res = n1 + n2;
				printf("=> %f %c %f = %f\n", n1, op, n2, res);
				break;
			case '-':	
				res = n1 - n2;
				printf("=> %f %c %f = %f\n", n1, op, n2, res);
				break;
			case '*':	
				res = n1 * n2;
				printf("=> %f %c %f = %f\n", n1, op, n2, res);
				break;
			case '/':	
				res = n1 / n2;
				printf("=> %f %c %f = %f\n", n1, op, n2, res);
				break;
			case 's':	
				return 0;
			default:
				printf("Operacao invalida\n");
		}
	
	}
	
	return 0;
}
