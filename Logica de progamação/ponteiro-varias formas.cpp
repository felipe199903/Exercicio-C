#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int vetor[] = {10,20,30,40,50,60,70,80};
    int *p;
	p = vetor; // p aponta 10
	printf("*p = %d\n",*p); // imprime o que p aponta (10)
	printf("p++ = %p\n",p++); // anda 1 posicao no vetor (p aponta 20), imprime endereco de memoria apontado por p
	printf("*p = %d\n",*p);    // imprimir 20
	(*p)++; // soma 1 ao que p aponta (20+1)
	printf("Rodei (*p)++ e imprimi *p = %d\n",*p);    // imprime o que p aponta - 21
	
	printf("*(p++) = %d\n",*(p++) ); // imprimir o que p aponta (30) e vai andar uma posicao (40)  
    printf("*p = %d\n",*p ); 
    printf("*(++p) = %d\n",*(++p) ); 
    printf("*p = %d\n",*p ); 
	system("PAUSE");	
	return 0;
}


