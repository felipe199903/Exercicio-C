/* Exerc�cio: Programa que recebe o p�blico de um Allianz Parque e imprime na
				  tela a mensagem correspondente de acordo com:
				  
				  P�blico entre 0 e 1000 pessoas: "P�blico baixo"
				  P�blico entre 1000 e 10000 pessoas: "P�blico m�dio"
				  P�blico entre 10000 e 41999: "P�blico alto"
				  P�blico igual a 42000: "Est�dio lotado"
				  
*/
					
#include <stdio.h>
int main(){
	
	int p;
	
	printf("Digite o publico do estadio\n");
	scanf("%d", &p);
	
	/*if(p >= 0 && p <= 1000){
		printf("Publico baixo\n");
	}
	if(p > 1000 && p <= 10000){
		printf("Publico medio\n");
	}
	if(p > 10000 && p <= 41999){
		printf("Publico alto\n");
	}
	if(p == 42000){
		printf("Estadio lotado\n");
	}*/
	
	if(p>= 0 && p < 1000){
		printf("Publico baixo\n");
	} else if (p > 1000 && p < 10000){
		printf("Publico medio\n");
	} else if (p > 10000 && p < 41999){
		printf("Publico alto\n");
	} else if (p == 42000){
		printf("Estadio lotado\n");
	}else{
		printf("Valor invalido\n");
	}
		

	return 0;	
}
