/* Exercício: Programa que captura as notas AV1 e AV2 de três alunos, calcula suas 
					médias,faltas e se foi aprovado ou reprovado guardando todos os dados numa matriz. */

#include <stdio.h>

int main(){
	
	float dados[10][10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Digite a AV1 do aluno %d\n", i);
		scanf("%f", &dados[i][0]);
		printf("Digite a AV2 do aluno %d\n", i);
		scanf("%f", &dados[i][1]);
		dados[i][2] = (dados[i][0] + dados[i][1])/2;
		printf("Digite as faltas %d\n", i);
		scanf("%f", &dados[i][4]);
		
	
		printf("Faltas %d = %f\n", i, dados[i][4]);
		printf("Media do aluno %d = %f\n", i, dados[i][2]);
		
	if(dados[i][2] <=3){
		printf("Reprovado\n");
	}	
	else if(dados[i][2] <5){
		printf("Recuperacao\n");
	}
	else {
		printf("Aprovado\n");
	}
}
	return 0;
}

