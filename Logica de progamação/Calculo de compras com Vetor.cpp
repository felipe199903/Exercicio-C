#include <stdio.h>

int main()
{
	int qtdp[10], qtdpd[10], repetir,codv[10],cont, i;
	float  valori[10], valorti[10], valortf[10];
	valortf[10]=0;
	repetir=1;
	cont=0;
	
	printf("Informe a quantidade de pessoas:");
	scanf("%d", &qtdp[cont]);
	
	printf("\n");
	
	do{
	
	printf("Informe o codigo do produto: ");
	scanf("%d", &codv[cont]);	
		
	printf("Valor do produto por unidade: R$");
	scanf("%f", &valori[cont]);
	
	if (valori[i]>5)
	{
		codv[cont];
		cont++;
	}
		
	printf("Quantidade do produto: ");
	scanf("%d", &qtdpd[cont]);

	valortf[i] = valori[i] * qtdpd[i] + valortf[i];
		
	printf("Digite 1 para registrar mais um produto: ");
	scanf("%d", &repetir);
	
	printf("\n");
	
	}while(repetir==1);
	
	valorti[i] = valortf[i] / qtdp[i];
	
	printf("Valor total da compra: %0.1f\n", valortf[i]);
	printf("Valor a pagar por pessoa: %0.2f", valorti[i]);
	
	printf("\n\ncodigos dos produtos com valor unitario maior que R$ 5.00: ");
	
	for (int i=0; i<cont;i++)
		printf("\nCodigo: %d", codv[i]);
	
	return 0;
}
