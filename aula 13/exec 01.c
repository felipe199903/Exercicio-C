/* Exerc�cio 1: Fa�a um programa para testar os seguintes comandos, sendo p um ponteiro:
						 p++
						 *p++
						 (*p)++
						 *(p++) */
						 
#include <stdio.h>

int main(){
	
	int vet[4] = {9, 8, 7, 6};
	
	int *p, i;
	
	p=vet;
	
	printf("%d\n", *p);
	
	//Testar as express�es em i.
	i=*(p++);
	
	printf("*p = %d, i = %d\n", *p, i);
}
