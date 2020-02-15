/* Exercício: Complemente o exercício 1 para que o usuário digite as faltas
					do aluno, e divida as mensagens em aprovado/reprovado por notas
					e também por faltas. (limite de faltas: 20)
					*/
					
#include <stdio.h>
int main(){
	
	int faltas;
	float media, av1, av2;
	
	printf("Digite as notas AV1 e AV2\n");
	scanf("%f", &av1);
	scanf("%f", &av2);
	
	printf("Digite a quantidade de faltas\n");
	scanf("%d", &faltas);
	
	media = (av1 + av2)/2;
	
	if(media>=6){
		printf("Aprovado por nota com media %f\n", media);
	}else{
		printf("Reprovado por nota com media %f\n", media);
	}
	
	if(faltas > 20){
		printf("Reprovado por faltas\n");
	}
	
	return 0;	
}
