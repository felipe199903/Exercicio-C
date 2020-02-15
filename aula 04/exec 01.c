/* Exemplo: Calculadora simples, em que o usuário digita a operação a ser realizada
				na seguinte ordem:
				
				número operação número */
				
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
			default:
				printf("Operacao invalida\n");
		}
	
	}
	
	return 0;
}
