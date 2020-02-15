#include<stdio.h>


int main(){
	
	int a, b, res;
	int *pa, *pb, *pres;
	pa=&a;
	pb=&b;
	pres=&res;
	
	scanf("%d", pa);
	scanf("%d", pb);
	
	*pres=*pa + *pb;
	
	printf("%d", *pres);
	
	return 0;
	
	

	
}
