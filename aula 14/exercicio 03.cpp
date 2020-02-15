#include<stdio.h>

int main(){
	
	double ht,vl,vf;
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%lf",&ht);
	
	vl=(ht*19.50);
	
	printf("Salario final: R$ %.2lf\n",vl);
	
	return 0;
}
