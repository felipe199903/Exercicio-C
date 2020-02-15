/* Exercício: Programa que captura uma string (tam. máximo 20) e mostra na tela quantas vogais	
					existem nessa string */

#include <stdio.h>

int main(){
	
	char str[21];
	
	int contvogal, i;
	
	printf("Digite uma palavra\n");
	scanf("%s", str);
	
	contvogal = 0;
	for(i=0;str[i] != '\0';i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			contvogal++;
		}
	}
	
	printf("Sao %d vogais\n", contvogal);
	
	return 0;
}

