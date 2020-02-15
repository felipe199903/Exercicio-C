#include <stdio.h>

int main()
{
	int voo, pasn, pc, varpc,  cont,matriz[10][3];
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
			
			matriz[cont][0]=voo;
			matriz[cont][1]=pasn;
			matriz[cont][2]=varpc;
			
			cont ++;
		}
	}
}while(voo!=0);


	    printf("Voo   Passagem   Primeira class");
		for(int i=0;i<cont;i++)
		{

		printf("\n");
		printf("%d %5d %11d", matriz[i][1],matriz[i][0],matriz[i][2]);
		printf("\n");
	}

	
	return 0;
}
