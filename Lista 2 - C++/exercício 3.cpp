#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int s, i, contnum, soma;
	
	contnum = 0;
	s = 0;
	soma=0;
	printf("Soma dos numeros impares multiplos de 3 entre 1 e 500: ");
	
	for(i=1;i<=500;i++){
		s+i;
	}
	
	for (i=1;i<=500;i++){
		if( i%3==0 && i%2==1){
	/*printf("%d \n",i); */
			soma=soma+i;			
			contnum++;
		}
	}
	printf("%d \n",soma);
	
	return 0;
}
