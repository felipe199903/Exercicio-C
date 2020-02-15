#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i,ra;
	char nome[100][100];

	i=0;
	do
	{
		printf("nome: ");
		gets(nome[i]);
			
		scanf("%d",ra);
		fflush(stdin);
		i++;
	}
	while(ra!=0);	
	
	for (int j=0;j<i;j++)
	{
		puts(nome[j]);
		printf("\n");
	}
	
	return 0;
}
