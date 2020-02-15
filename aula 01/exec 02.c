/* Exemplo: Programa que captura dois valores do usuário, soma esses valores,
				e mostra o resultado na tela */

#include <stdio.h>
int main(){

	int n1, n2, soma;
	
	printf("Digite 2 valores\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma vale: %d", soma);
	
	return 0;

}
