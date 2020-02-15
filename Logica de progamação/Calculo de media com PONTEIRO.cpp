#include <stdio.h>
#include <stdlib.h>

int main()
{
float n1, n2, *p1, *p2, nf, *pf;

printf("digite a primeira nota:");
scanf("%f", &n1);

printf("digite a segunda nota:");
scanf("%f", &n2);

p1=&n1;
p2=&n2;

nf=(*p1+*p2)/2;
pf=&nf;

system("cls");

printf("Media:%.2f",*pf);
printf("\n");


system("pause");
return 0;
}
