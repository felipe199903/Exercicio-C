#include <stdio.h>
#include <stdlib.h>
int main()
{
	int qtdp, qtdpd[10], repetir,cod[10], cont;
	float  valori[10], valorti, valortf;
	valortf=0;
	repetir=1;
	cont=0;
	
	printf("Informe a quantidade de pessoas:");
	scanf("%d", &qtdp);
	
	printf("\n");
	
	do{
	
	system("cls");
	printf("Informe o codigo do produto: ");
	scanf("%d", &cod[cont]);	
		
	printf("Valor do produto por unidade: R$");
	scanf("%f", &valori[cont]);	
		
	printf("Quantidade do produto: ");
	scanf("%d", &qtdpd[cont]);
		
	valortf = valori[cont] * qtdpd[cont] + valortf;
		
	printf("Digite 1 para registrar mais um produto: ");
	scanf("%d", &repetir);
	
	printf("\n");
	cont++;
	}while(repetir==1);
	printf("\n");
	printf("Codigo Quantidade       Preco       Total\n" );
	valorti = valortf / qtdp;
	for (int i=0;i<cont;i++)
	{
		printf("%6d  %9d  %10.2f  %10.2f \n",cod[i], qtdpd[i],valori[i], qtdpd[i]*valori[i] );
	}
	printf("Valor total da compra: %0.1f\n", valortf);
	printf("Valor a pagar por pessoa: %0.2f", valorti);
	return 0;
}
