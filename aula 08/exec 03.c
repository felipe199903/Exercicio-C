/* Exercício: Programa que captura dados do usuário para uma matriz 5 x 3 e mostra
					na tela o maior valor de cada linha. */

#include <stdio.h>

int main(){
	
	int v[5][3], i, j, maior;
	
	//Captura na ordem inversa ao exerício 2a (em que se pega todos os valores de
	//cada coluna. Aqui, captura-se todos os valores de cada linha para passar para
	//a próxima
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			scanf("%d",&v[i][j]);
		}
	}

	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d\t",v[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<5;i++){
		maior=v[i][0];
		for(j=1;j<3;j++){
			if(v[i][j] > maior){
				maior = v[i][j];
			}
		}
		printf("Maior valor da linha %d = %d\n", i, maior);
	}
	
	
	
	return 0;
}

