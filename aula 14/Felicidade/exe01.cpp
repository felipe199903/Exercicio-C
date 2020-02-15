#include<stdio.h>
	
	int main(){
		
		char tn,ct;
		double sb,sl,ir;
		
		printf("Digite o salario: ");
		scanf("%lf",&sb);fflush(stdin);
		
		printf("\nDigite o turno: ");
		scanf("%c",&tn);fflush(stdin);
		
		printf("\nDigite a categoria: ");
		scanf("%c",&ct);fflush(stdin);

		switch(tn)
    {
        case 'm':
	
        if(ct=='o'){
				sb=sb+sb*0.005;		
			}
		if(ct=='g'){
			sb=sb+sb*0.01;	
		}	
		break;
        case 't':
   			if(ct=='o'){
				sb=sb+sb*0.005;	
			}	
			if(ct=='g'){
				sb=sb+sb*0.01;	
			}
		break;
        case 'n':
            if(ct='o'){
				sb=sb+sb*0.07;
			}
			if(ct=='g'){
				sb=sb+sb*0.02;	
			}	
		break;
    }
      
      
      if(sb>=1499.16 && sb<=2246.75){
      	
      		ir=(sb*0.075)-(112.43);
      		sl=sb-ir;
	  }
	  if(sb>=2246.76 && sb<=2995.70){
      	
      		ir=(sb*0.15)-(280.94);
      		sl=sb-ir;
	  }
	  if(sb>=2995.71 && sb<=3743.19){
      	
      		ir=(sb*0.225)-(505.62);
      		sl=sb-ir;
	  }
	  if(sb>3743.19){
      	
      		ir=(sb*0.275)-(692.78);
      		sl=sb-ir;
	  }
	  
	printf("\nSalario Bruto: %.2lf\n",sb);
	printf("Imposto:%.2lf\n",ir);
	printf("Salario liquido:%.2lf\n",sl);	
		
		return 0;
	}
