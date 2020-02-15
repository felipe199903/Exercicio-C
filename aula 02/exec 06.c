/* Exercício: Programa que captura uma letra e mostra na tela se é uma vogal ou consoante. */

#include <stdio.h>
int main(){
	
	char letra;
	
	printf("Digite uma letra\n");
	scanf("%c", &letra);
	
	if(letra == 'a'){
		printf("Vogal\n");
	}
	else if(letra == 'e'){
		printf("Vogal\n");
	}	
	else if(letra == 'i'){
		printf("Vogal\n");
	}
	else if(letra == 'o'){
		printf("Vogal\n");
	}
	else if(letra == 'u'){
		printf("Vogal\n");
	}else{
		printf("Consoante\n");
	}
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Vogal\n");
			break;
		default:
			printf("Consoante\n");
	}
	
	return 0;
}
