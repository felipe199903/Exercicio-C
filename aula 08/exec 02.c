/* Exercício: Programa que captura dados do usuário para uma matriz 3 x 4 e imprime na
					tela essa matriz para verificação. */

#include <stdio.h>

int main(){
	
	int m[3][4], i;
	
	printf("Digite a primeira linha\n");
	for(i=0;i<4;i++){
		scanf("%d", &m[0][i]);
	}
	printf("Digite a segunda linha\n");
	for(i=0;i<4;i++){
		scanf("%d", &m[1][i]);
	}
	printf("Digite a terceira linha\n");
	for(i=0;i<4;i++){
		scanf("%d", &m[2][i]);
	}
	
	for(i=0;i<4;i++){
		printf("%d\t", m[0][i]);
	}
	printf("\n");
	for(i=0;i<4;i++){
		printf("%d\t", m[1][i]);
	}
	printf("\n");
	for(i=0;i<4;i++){
		printf("%d\t", m[2][i]);
	}	
	
	return 0;
}

