#include <stdio.h>

#define TAM 10

 
 int main(){
 	
    int vetor[TAM];
    int vetor2[TAM];
    int sum[TAM];
    int i;
    
    
    printf ("Digite 10 numeros\n");
 
    for (i = 0; i < TAM; i++)   
    {
       scanf("%d", &vetor[i]);
    }
    
    
    printf ("Digite mais 10 numeros\n");
 
    for (i = 0; i < TAM; i++)   
    {
       scanf("%d", &vetor2[i]);
    }
    
    for (i = 0; i < TAM; i++)
    {
    	sum[i] = vetor[i] + vetor2[i];
    	
	}
     
    printf("O resultado e:\n");
    
    for (i = 0; i < TAM; i++){
	
    printf("%d\n", sum[i]);
}
}
