#include <stdio.h>
#include <stdlib.h>


int main(){
	int a[100][100];
	
	int i, ordem,l,c, maior, menor;
	
	printf("Digite a Ordem da Matriz:  ");
	scanf("%d", &ordem);
	 
	 for(l=0;l<ordem;l++){
	    for(c=0;c<ordem;c++){
	    	printf("Digite a Primeira Matriz:  ");
	    	scanf("%d", &a[l][c]);
	    	
	    	
		}
}
		 maior=a[0][0];
		 for(l=0;l<ordem;l++){
	       for(c=0;c<ordem;c++){
          
		  if(a[l][c]>maior){
		 maior=a[l][c];
}
	}
}
	    menor=a[0][0];
		 for(l=0;l<ordem;l++){
	       for(c=0;c<ordem;c++){
          
		  if(a[l][c]<menor){
		 menor=a[l][c]; 	
	    }
	}
		}
 
    printf("Menor numero: %d  ", menor);
    printf("\nMaior numero: %d  ", maior);
	
	return 0;
}
