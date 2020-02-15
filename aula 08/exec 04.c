/* Exercício: Programa que captura dados do usuário para uma matriz 5 x 3 e mostra
					na tela o maior valor de cada coluna. */

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


	for(j=0;j<3;j++){
		maior=v[0][j];
		for(i=1;i<5;i++){
			if(v[i][j] > maior){
				maior = v[i][j];
			}
		}
		printf("Maior valor da coluna %d = %d\n", j, maior);
	}
	
	return 0;
}

