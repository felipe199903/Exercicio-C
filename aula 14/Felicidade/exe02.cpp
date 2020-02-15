#include<stdio.h>
#include<stdlib.h>
	
	int main(){
		
		char refri,tipo;
		double preco,sl,ir,precoi;
		
		printf("\nDigite o preco: R$");
		scanf("%lf",&preco);fflush(stdin);
	
		printf("\nDigite o tipo: \n[A]Alimentacao [L]Limpeza [V]Vestuario\n");
		scanf("%c",&tipo);fflush(stdin);
		
		printf("\nDeseja refrigeracao?: \n[S]Sim [N]Nao\n");
		scanf("%c",&refri);fflush(stdin);
		
		system ("CLS");

		switch(tipo)
    {
        case 'a':
	
        if(refri=='s'){
			preco=preco=8;		
			}
		if(refri=='n'){
			if(preco<15)
		 	preco=preco+2;	
		}
		if(preco>=15){	
		 	preco=preco+5;
		}
		break;
        
		case 'l':
		if(preco<10){
		 	preco=preco+1.50;	
		}
		if(preco>=10){
		 	preco=preco+2.50;
		}		
		break;
		
        case 'v':
       	    if(preco<30){
			 preco=preco+3;	
			}
			if(preco>=30){
			 preco=preco+2.50;
			}	
		break;
    }
      
      
      if(preco<25){
      		ir=preco*0.05;
      		precoi=preco+ir;
      	}
      	
      	
      if(preco>=25){
      		ir=preco*0.08;
      		precoi=preco+ir;
      	}
	  
	  
	printf("\nImposto: %.2lf\n",ir);
	printf("Preco de custo:%.2lf\n",preco);
	printf("Preco de venda:%.2lf\n",precoi);	
		
		return 0;
	}
