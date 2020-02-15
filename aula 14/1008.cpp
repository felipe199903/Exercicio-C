#include<stdio.h>
 
int main(){
     
    int num,ht;
	float vh;
	
	scanf("%d",&num);
	scanf("%d",&ht);
	scanf("%f",&vh);
	
	printf("NUMBER = %d\n",num);
	printf("SALARY = U$ %.2f\n",ht*vh);
   
    return 0;
}
