#include <stdio.h>

int main()
{
	int qtd;
	
	printf("Quantidade de valores: ");
	scanf("%d",&qtd);
	
	for(int i=0;i<qtd;i++)
	{
		printf("valor %d\n",i+1);
	}
	
	return 0;
}
