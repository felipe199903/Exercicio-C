#include<stdio.h>

int main(){
	float lr, pr, qtde, soma;
	int r;
	
	printf("Calcular o que vale a pena entre unidade ou lote\n\n");
	
	printf("Digite o valor da unidade:\n");
	scanf("%f", &lr);
	
	printf("Digite o valor do lote:\n");
	scanf("%f", &pr);
	
	printf("Digite a quantidade do lote:\n");
	scanf("%f", &qtde);
	
	soma=(lr*qtde);
	
	if(soma==pr){
		printf("Indiferente");
}
	else
	if(soma>pr){
		printf("Fardo vale mais a pena");}
	else
		printf("Unidade vale mais a pena\n");

}
