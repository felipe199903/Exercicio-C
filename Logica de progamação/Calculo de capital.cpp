#include <stdio.h>

int main()
{
	
	float cdv, d, cdc, A, B, R;
	
	printf("Lucro relativo a compra de dolar\n\n");
	
	printf("digite o valor do dolar:\n");
	scanf("%f,",&d);
	
	printf("digite o valor de compra:\n");
	scanf("%f", &cdc);
	
	printf("digite o valor de venda:\n");
	scanf("%f,",&cdv);
	
	A=cdc*d;
	B=cdv*d;
	R=B-A;
	
	
	if (R>0)
	{
	printf("Voce lucrou R$ %0.2f",R);
	}
	else
	{
	R=R*-1;
	printf("Voce perdeu R$ %0.2f",R);
	}

	
	return 0;


} 
