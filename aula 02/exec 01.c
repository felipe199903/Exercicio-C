/* Exerc�cio: Programa que captura as notas AV1 e AV2 de um aluno, calcula a 
					m�dia aritm�tica das notas e mostra na tela a mensagem de "aprovado"
					caso a m�dia seja maior do que 6, e "reprovado", caso contr�rio. 
					
					1) Mensagem para o usu�rio digitar as duas nota
					2) Capturar as notas AV1 e AV2
					3) Calcular a m�dia
					4) Verificar a m�dia e imprimir a mensagem adequada
					
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
