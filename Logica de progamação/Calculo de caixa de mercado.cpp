#include<stdio.h>

int main(){
	
	int p,q,t,r,tg;
	tg = 0;
	r=1;
	while(r==1){
	
	printf("Preço do produto:\n");
		scanf("%d",&p);
	
	printf("Quantidade:\n");
		scanf("%d",&q);
	
t=(p*q);
tg = t + tg ;	
	printf("Total do produto :%d\n",t);	
printf("Digite 1 para adicionar mais produtos:\n");
	scanf("%d",&r);
}
	
	printf("Total:%d\n",tg);
	
	
}
