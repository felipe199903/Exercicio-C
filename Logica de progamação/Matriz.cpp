#include <stdio.h>

int main()
{
	int matriz[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j;

	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%5d",matriz[i][j]);
		}		
		printf("\n");
	}
	return 0;
}
