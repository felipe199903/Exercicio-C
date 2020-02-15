#include <stdio.h>
#include <string.h>

int main(){

	char str[10][21];
	int i, conta, linha;
	
	puts("Digite os 10 nomes dos alunos");
	for(i=0;i<10;i++){
		gets(str[i]);
	}
	
	conta = 0;
	for(linha = 0; linha < 10; linha++){
		for(i=0;i<strlen(str[linha]);i++){
			if(str[linha][i] == 'a' ||
				str[linha][i] == 'e' ||
				str[linha][i] == 'i' ||
				str[linha][i] == 'o' ||
				str[linha][i] == 'u'){
			conta++;
		}

		}		
	}
	
	printf("Temos %d vogais\n", conta);
	
	return 0;
}
