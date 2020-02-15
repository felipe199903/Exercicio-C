#include <stdio.h>

int main()
{
	int voo,voov[10], pasn,pasnv[10], pc, varpc, varpcv[10], cont;
	cont=0;
	
	do
{
	printf("Digite o numero do voo:");
	scanf("%d", &voo);
	if (voo!=0)
	{
		printf("Digite o valor da passagem:");
		scanf("%d", &pasn);
		
		printf("Deseja primeira classe?\n Sim=1 \n Nao=2 \n");
		scanf("%d", &pc);
		
		if(pc==1)
		{
			printf("Valor da primeira classe:");
			scanf("%d", &varpc);
			printf("\n");
			
			pasnv[cont]=pasn;
			voov[cont]=voo;
			varpcv[cont]=varpc;
			
			cont ++;
		}
	}
}while(voo!=0);


	    printf("Voo   Passagem   Primeira class");
		for(int i=0;i<cont;i++)
		{

		printf("\n");
		printf("%d %5d %11d", pasnv[i],voov[i],varpcv[i]); 
		printf("\n");
	}

	
	return 0;
}
