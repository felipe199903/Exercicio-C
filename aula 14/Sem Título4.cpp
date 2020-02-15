#include <stdio.h>

int main(){
	
	int a,b,c,i=0;
	a=1;
	b=2;
	c=0;
	
	printf("Bem-vindo ao jogo do copo\n\n");
	printf("instrucoes: coloque o vinho no copoa A sem misturar com o abacati, boa sorte!!\n\n");
	printf("Copos A:abacati B:vinho C:vazio\n\n 1-abacati \n 2-vinho \n 0-vazio");
	printf("\n\nCopos A:%i B:%i C:%i",a,b,c);
	
	for(i=0;i<3;i++){
	printf("\n\nbebida no Copo A: \n");
	scanf("%i",&a);
	
	printf("bebida no Copo B: \n");
	scanf("%i",&b);
	
	printf("bebida no Copo C: \n");
	scanf("%i",&c);
	}
		if(c=!0)
		{
		printf("\n\nCopos A:%i B:%i C:%i",a,b,c);
		}		
		else
		{
		printf("As bebidas se misturaram, tente novamente");
		}
	return 0;	
}
