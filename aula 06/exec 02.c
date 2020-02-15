/* Exercício: Programa que captura 10 valores do usuário e calcula:
					- média aritmética
					- maior valor
					- menor valor
				 */
					
#include <stdio.h>

#define TAM 10

int main(){
	
	float vet[TAM], maior, menor, media;
	
	int i;
	
	printf ("Digite %d valores\n", TAM);
	
	// captura dos valores
	for(i=0;i<TAM;i++){
		scanf("%f", &vet[i]);
	}
	
	//média aritmética
	media = 0;
	for(i=0;i<TAM;i++){
		media = media + vet[i];
	}	
	media = media / TAM;
	printf("Media = %.2f\n", media);
	
	//maior valor
	maior = vet[0];
	for(i=1;i<TAM;i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
	printf("Maior = %.2f\n", maior);

	//menor valor
	menor = vet[0];
	for(i=1;i<TAM;i++){
		if(vet[i]<menor){
			menor = vet[i];
		}
	}
	printf("Menor = %.2f\n", menor);
	
	return 0;
}
