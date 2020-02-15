/* Exercício: Programa que captura as notas AV1 e AV2 de um aluno, calcula a 
					média aritmética das notas e mostra na tela a mensagem de "aprovado"
					caso a média seja maior do que 6, e "reprovado", caso contrário. 
					
					1) Mensagem para o usuário digitar as duas nota
					2) Capturar as notas AV1 e AV2
					3) Calcular a média
					4) Verificar a média e imprimir a mensagem adequada
					
					*/
					
#include <stdio.h>
int main(){
	
	float media, av1, av2;
	
	//1
	printf("Digite as notas AV1 e AV2\n");
	//2
	scanf("%f", &av1);
	scanf("%f", &av2);
	//3
	media = (av1 + av2)/2;
	//4
	if(media>=6){
		printf("Aprovado\n");
	}else{
		printf("Reprovado\n");
	}
	
	return 0;	
}
