#include <stdio.h>

int main(){

   
   int matriz [5] [3];
   
  int i , j;
  for(i = 0 ; i < 5 ; i++){
  	for(j = 0 ; j < 3 ; j++){
  		printf("Coloque o valor:");
  		scanf("%d", &matriz [i] [j]);
  		
	  }
  }  
  
   for(i = 0 ; i < 5 ; i++){
  	for(j = 0 ; j < 3 ; j++){
  		printf("%d", matriz [i] [j]);
  		
	  }
	  printf("\n");
  } 
  
  
  }
  
	

