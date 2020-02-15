#include <stdio.h>

int main()
{
	int qtdp, qtdpd, repetir,cod, cod[7];
	float  valori, valorti, valortf;
	valortf=0;
	repetir=1;
	
	
	printf("Informe a quantidade de pessoas:");
	scanf("%d", &qtdp);
	
	printf("\n");
	
	do{
	
	printf("Informe o codigo do produto: ");
	scanf("%d" &cod);	
		
	printf("Valor do produto por unidade: R$");
	scanf("%f", &valori);
		
	printf("Quantidade do produto: ");
	scanf("%d", &qtdpd);

	valortf = valori * qtdpd + valortf;
		
	printf("Digite 1 para registrar mais um produto: ");
	scanf("%d", &repetir);
	
	printf("\n");
	
	}while(repetir==1);
	
	valorti = valortf / qtdp;
	
	if(cod>5){
		
		printf("%d",cod);
	}
	
	printf("Valor total da compra: %0.1f\n", valortf);
	printf("Valor a pagar por pessoa: %0.2f", valorti);
	
	return 0;
}
