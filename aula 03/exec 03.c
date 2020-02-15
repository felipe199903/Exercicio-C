#include <stdio.h>

int main(){
	
	float sal, imp;
	
	printf("Digite seu salario:\n");
	scanf("%f", &sal);
	
	if(sal < 19000){
		imp = sal * 0.175;
		printf ("Imposto = %f\n", imp);
		//printf("Faixa 1\n");
	}else if (sal < 35000){
		imp = 19000 * 0.175;
		sal = sal - 19000;
		imp = imp + sal * 0.225;
		printf ("Imposto = %f\n", imp);
	}else{
		
		printf ("Imposto = %f\n", imp);
		
	}
	
	
	
	return 0;
}
