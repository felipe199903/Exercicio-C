#include<stdio.h>
#include<stdlib.h>

int fmaior (int v1, int v2, int v3, int v4)
{
	int maior;
maior=v1;
if  (v2 > maior )
{
	maior = v2;
}
if  (v3 > maior )
{
	maior = v3;
}
if  (v4 > maior )
{
	maior = v4;
}

return maior;	
}

int fmenor (int *v1, int *v2, int *v3, int *v4)
{
	int menor;
menor=*v1;
if  (*v2 < menor )
{
	menor = *v2;
}
if  (*v3 < menor )
{
	menor = *v3;
}
if  (*v4 < menor )
{
	menor = *v4;
}
return menor;	
}

int main()
{
int v1, v2, v3, v4, maior, menor;
do
{

printf("Digite o primeiro valor: ");
scanf("%d",&v1);

printf("Digite o segundo valor: ");
scanf("%d",&v2);

printf("Digite o terceiro valor: ");
scanf("%d",&v3);

printf("Digite o quarto valor: ");
scanf("%d",&v4);

//system("CLS");
/*
if ( (v1>=v2) && v1>=v3) && v1>=v4) )
{
	maior = v1;
}
if ( (v2>=v1) && v2>=v3) && v2>=v4) )
{
	maior = v2;
}
if ( (v3>=v1) && v3>=v2) && v3>=v4) )
{
	maior = v3;
}
if ( (v4>=v1) && v4>=v2) && v4>=v3) )
{
	maior = v4;
}
*/
maior = fmaior(v1,v2,v3,v4);
menor = fmenor(&v1,&v2,&v3,&v4);
printf("\n\n\nMaior valor eh: %d\n",maior);
printf("\n\n\nMenor valor eh: %d\n",menor);
system("pause");
system("cls");
} while (1==1);
return 0;
}
