#include<stdio.h>
#include<string.h>

int main()
{
	char a, b, res;
	char *pa, *pb, *pres;
	
	pa=&a;
	pb=&b;
	pres=&res;

	scanf("%c",&*pa);
	fflush(stdin);
	
	scanf("%c",&*pb);
	fflush(stdin);
	
	printf("%x\n %x\n",*pa,*pb);
	printf("%x\n%x",pa,pb);
	
	return 0;
	
}
