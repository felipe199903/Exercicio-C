#include<stdio.h>
#include<ctype.h>

int main(){
	
	char ca;
	
	printf("Digite um caracter: ");
	scanf("%c",&ca);
	
	if(toupper(ca)=='F'){
		printf("\n%celipe",ca);
	}
	else if(ca=='l'){
		printf("\n lispe");
	}
	else{
		printf("Invalido");
	}
	
	return 0;
}
