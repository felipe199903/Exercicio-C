#include<stdio.h>

int main (){

	int i, j, n, m1 [100] [100], m2 [100] [100], soma [100] [100];
	
	printf("Digite o tamanho das matrizes quadradas.\n");
    scanf("%d", &n);
    
    printf("Digite os valores da matriz.\n");
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		scanf("%d", &m1[i][j] );
		}
	}
	for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		printf("%d\t", m1[i][j] );
		}
		printf("\n");
		
	}
	printf("\n\n");

	
	 printf("Digite os valores da segunda matriz.\n");
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		scanf("%d", &m2[i][j] );
		}
	}
	for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		printf("%d\t", m1[i][j] );
		}
		printf("\n");
		
	}
	printf("\n\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			soma [i][j]= m1 [i][j] + m2 [i][j];
			printf("%d\t", soma[i][j]);
			
		}
		printf("\n");
		
	}
	
	return 0;
}
