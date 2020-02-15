#include<stdio.h>

int main()
{
int a, b, r;
char e;

printf("Digite o primeiro valor: ");
scanf("%d",&a);
setbuf(stdin, NULL);

printf("Digite o segundo o valor: ");
scanf("%d",&b);
setbuf(stdin, NULL);

printf("Digite a operacao desejada (+ - * /): ");
scanf("%c",&e);
setbuf(stdin, NULL);

if(e=='+')
{
r=a+b;
}
else if(e=='-')
{
r=a-b;
}
else if(e=='*')
{
r=a*b;
}
else if(e=='/')
{
r=a/b;
}
else
{
printf("Operador invalido");
}

printf("Resultado: %d\n", r);

return 0;
}
