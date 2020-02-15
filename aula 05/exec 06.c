/* Exercício: Programa que conta quantos números entre 1 e 100 que são
				  divisíveis por 2 e 3 ao mesmo tempo. Faça com while, for e do-while. */
				  
#include<stdio.h>

int main(){
	
	int i, contnum;
	
	contnum = 0;
	
	/*i=1;
	while(i<=100){
		if(i%2==0 && i%3==0){
			printf("%d\n",i);
			contnum++;
		}
		i++;
	}*/
	
	/*for(i=1;i<=100;i++){
		if(i%2==0 && i%3==0){
			printf("%d\n",i);
			contnum++;
		}
	}*/
	
	i=1;
	do{
		if(i%2==0 && i%3==0){
			printf("%d\n",i);
			contnum++;
		}		
		i++;
	}while(i<=100);
	
	printf("Temos %d numeros divisiveis por 2 e 3 entre 1 e 100", contnum);
	
	return 0;
}
