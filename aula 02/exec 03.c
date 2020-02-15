/* Exercício: Programa que recebe as notas AV1 e AV2 de um aluno e mostra na tela as
				  seguintes mensagens, de acordo com a média calculada:
				  
				  Entre 0 e 3 (0<=media<=3): Reprovado
				  Entre 3 e 6 (3<media<6): Recuperação
				  Maior ou igual a 6 (media>=6): Aprovado
				  
*/
					
#include <stdio.h>
int main(){
	
	float media, av1, av2;
	
	printf("Digite as notas AV1 e AV2\n");
	scanf("%f", &av1);
	scanf("%f", &av2);

	media = (av1 + av2)/2;

	/*if(media >=0 && media <=3){
		printf("Reprovado\n");
	}
	if(media >3 && media <6){
		printf("Recuperacao\n");
	}
	if(media >= 6){
		printf("Aprovado\n");
	}*/
	
	if(media <=3){
		printf("Reprovado\n");
	}	
	else if(media <6){
		printf("Recuperacao\n");
	}
	else {
		printf("Aprovado\n");
	}*/
	
	
		
	return 0;	
}
