#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A=0, S=0;
do{
	printf("Digite -1 para finalizar: ");
	scanf("%d",&A);
	
	S=A+S;
	
}while(A!=-1);

printf("%d\n",S);

system("pause");
return 0;
}
