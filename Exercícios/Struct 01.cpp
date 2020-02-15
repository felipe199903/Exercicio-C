#include <stdio.h>
#include <stdlib.h>

struct a{
	float pop, pop1;
	float area, area1;
	float densidade, densidade1;
	char nome[20], nome1[20];
};

int main()
{
	
struct a cidade;

printf("Digite o tamanho da populacao: ");
	scanf("%f", &cidade.pop);

printf("Digite a area: ");
	scanf("%f", &cidade.area);
	
cidade.densidade=cidade.pop/cidade.area;

setbuf(stdin,NULL);
	printf("Digite o nome da cidade:");
		scanf("%s", &cidade.nome);

//CIDADE 2

printf("\nDigite o tamanho da populacao: ");
	scanf("%f", &cidade.pop1);

printf("Digite a area: ");
	scanf("%f", &cidade.area1);
	
cidade.densidade1=cidade.pop1/cidade.area1;

setbuf(stdin,NULL);
	printf("Digite o nome da cidade:");
		scanf("%s", &cidade.nome1);
		

setbuf(stdin,NULL);
	printf("Cidade: %s\n",cidade.nome);
	printf("Populacao: %f\n",cidade.pop);
	printf("Area: %f\n",cidade.area);
	printf("Densidade: %f\n",cidade.densidade);

setbuf(stdin,NULL);
	printf("\nCidade: %s\n",cidade.nome1);
	printf("Populacao: %f\n",cidade.pop1);
	printf("Area: %f\n",cidade.area1);
	printf("Densidade : %f\n",cidade.densidade1);
	
if(cidade.densidade>cidade.densidade1)
{
	printf("A %s tem a maior densidade",cidade.nome);
}
else
{
	printf("A %s tem a maior densidade",cidade.nome1);
}

return 0;
}
