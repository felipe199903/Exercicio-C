 #include <stdio.h>
 int main(){
 	int faixa1, faixa2, faixa3, faixa4, vdu;
 	faixa1=0;
 	faixa2=0;
 	faixa3=0;
 	faixa4=0;
 	
 	vdu=0;
 	
 	while (vdu>=0)
 	{
 		printf("Digite valor: ");
		scanf("%d",&vdu);	
		
		if (vdu>=0 && vdu<=25)
		{
			faixa1=faixa1+1;
		} 
		
		if (vdu>=26 && vdu<=50)
		{
			faixa2=faixa2+1;
			//faixa2++;
		} 
		
		if (vdu>=51 && vdu<=75)
		{
			faixa3=faixa3+1;
		} 
		
		if (vdu>=76 && vdu<=100)
		{
			faixa4=faixa4+1;
		} 		
		printf ("PASSO A PASSO\nFaixa1: %d \nFaixa2: %d \nFaixa3: %d\nFaixa4: %d\n",faixa1, faixa2,faixa3,faixa4);		
	}
	printf ("\n\nRESULTADO FINAL\n\nFaixa1: %d \nFaixa2: %d \nFaixa3: %d\nFaixa4: %d\n",faixa1, faixa2,faixa3,faixa4);		
 	return 0;
 }
