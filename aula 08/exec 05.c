/* Exerc�cio: Exemplo string */

#include <stdio.h>

int main(){
	
	//Inicializa��o de string - deve-se colocar o '\0'
	char str[10] = {'u', 'n', 'i', 'n', 'o', 'v', 'e', '\0'};
	
	//scanf de uma string: o pr�prio scanf coloca o delimitador '\0'
	//printf("Digite um nome\n");
	//scanf("%s", str);
	
	printf("A string digitada foi: %s\n", str);
	
	return 0;
}

