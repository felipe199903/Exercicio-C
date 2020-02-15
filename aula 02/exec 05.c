/* Exercício: Programa em que o usuário digita o número do mês (de 1 a 12) e o nome
				  correspondente é impresso na tela.				  
*/
					
#include <stdio.h>
int main(){
	
	int mes;
	
	printf("Digite o numero do mes\n");
	scanf("%d", &mes);
	
	if(mes == 1){
		printf("Janeiro\n");
	}else if(mes == 2){
		printf("Fevereiro\n");
	}else if(mes == 3){
		printf("Marco\n");
	}else if(mes == 4){
		printf("Abril\n");
	}else if(mes == 5){
		printf("Maio\n");
	}else if(mes == 6){
		printf("Junho\n");
	}else if(mes == 7){
		printf("Julho\n");
	}else if(mes == 8){
		printf("Agosto\n");
	}else if(mes == 9){
		printf("Setembro\n");
	}else if(mes == 10){
		printf("Outubro\n");
	}else if(mes == 11){
		printf("Novembro\n");
	}else if(mes == 12){
		printf("Dezembro\n");
	}else{
		printf("Valor invalido\n");
	}
	
	//Código com switch
	
	switch(mes){
		case 1:
			printf("Janeiro\n");
			break;
		case 2:
			printf("Fevereiro\n");
			break;
		case 3:
			printf("Marco\n");
			break;
		case 4:
			printf("Abril\n");
			break;
		case 5:
			printf("Maio\n");
			break;
		case 6:
			printf("Junho\n");
			break;
		case 7:
			printf("Julho\n");
			break;		
		case 8:
			printf("Agosto\n");
			break;
		case 9:
			printf("Setembro\n");
			break;
		case 10:
			printf("Outubro\n");
			break;
		case 11:
			printf("Novembro\n");
			break;
		case 12:
			printf("Dezembro\n");
			break;
		default:
			printf("Valor invalido\n");		
		
	}
	
	

	return 0;	
}
