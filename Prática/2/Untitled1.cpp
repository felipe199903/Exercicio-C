#include <stdio.h>

int main(){
	
	int m[2][2],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	printf("digite os valores: ");
	scanf("%d",&m[i][j]);
	}	
		}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("\t%d",m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
