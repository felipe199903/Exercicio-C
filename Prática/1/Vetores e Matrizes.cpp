#include <stdio.h>

int main(){
	/*
   int valor[5];
   int i;
   for(i=0 ; i < 6 ; i++){
   	
   	  printf("Digite um valor: ");
   scanf("%d", &valor[0]);
   	
   }
 
   for(i=0 ; i < 5 ; i++) {
   	printf("Posicao %d: %d\n", i, valor[i]);
   }
   */
   
   //End VETOR
   
   //Start MATRIZ
   
   int matriz [2] [2];
   
  int i , j;
  for(i = 0 ; i < 2 ; i++){
  	for(j = 0 ; j < 2 ; j++){
  		printf("Coloque o valor:");
  		scanf("%d", &matriz [i] [j]);
  		
	  }
  }  
  
   for(i = 0 ; i < 2 ; i++){
  	for(j = 0 ; j < 2 ; j++){
  		printf("%d", matriz [i] [j]);
  		
	  }
	  printf("\n");
  } 
  
  
  }
  
	

