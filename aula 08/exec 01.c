/* Exercício: Programa que captura as notas AV1, AV2 e faltas de 10 alunos, calcula suas 
					médias, guardando todos os dados numa matriz e depois mostra na tela
					se o aluno está aprovado ou reprovado por nota e falta. */

#include <stdio.h>

int main(){
	
	float dados[10][4];
	int i;
	
	for(i=0;i<10;i++){
		printf("Digite a AV1 do aluno %d\n", i);
		scanf("%f", &dados[i][0]);
		printf("Digite a AV2 do aluno %d\n", i);
		scanf("%f", &dados[i][1]);
		
		dados[i][2] = (dados[i][0] + dados[i][1])/2;
		
		printf("Digite as faltas do aluno %d\n", i);
		scanf("%f", &dados[i][3]);
		
		if(dados[i][2] >= 6){
			printf("Aprovado por nota\n");
		}else{
			printf("Reprovado por nota\n");
		}
		
		if(dados[i][3] > 20){
			printf("Reprovado por falta\n");
		}
	}
	
	return 0;
}

