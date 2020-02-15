/* Exercício: Programa que captura as notas AV1 e AV2 de três alunos, calcula suas 
					médias, guardando todos os dados numa matriz 3x3. */

#include <stdio.h>

int main(){
	
	float dados[3][3];
	int i;
	
	for(i=0;i<3;i++){
		printf("Digite a AV1 do aluno %d\n", i);
		scanf("%f", &dados[i][0]);
		printf("Digite a AV2 do aluno %d\n", i);
		scanf("%f", &dados[i][1]);
		dados[i][2] = (dados[i][0] + dados[i][1])/2;
		
		printf("Media do aluno %d = %f\n", i, dados[i][2]);
	}
	
	return 0;
}

