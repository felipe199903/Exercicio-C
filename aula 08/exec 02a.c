/* Exerc�cio: Programa que captura dados do usu�rio para uma matriz 3 x 4 e imprime na
					tela essa matriz para verifica��o. */

#include <stdio.h>

int main(){
	
	int m[3][4], i, j;
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			scanf("%d", &m[j][i]);
		}
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

