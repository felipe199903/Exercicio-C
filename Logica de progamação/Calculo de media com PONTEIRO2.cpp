#include <stdio.h>
#include <stdlib.h>

int main()
{
float n1, n2, *p1, *p2, nf, *pf;

p1=&n1;
p2=&n2;
pf=&nf;

printf("digite a primeira nota:");
scanf("%f", p1);

printf("digite a segunda nota:");
scanf("%f", p2);

*pf = (*p1+*p2)/2;

system("cls");

printf("Media:%.2f",*pf);
printf("\n");

system("pause");
return 0;
}

