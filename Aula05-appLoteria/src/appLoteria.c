/*
 ============================================================================
 Name        : appLoteria.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));

	int numSorteado = rand()%5;
	int numEscolhido = 0;

	printf("\nEscolha um número de 0 a 5: ");
	scanf("%d",&numEscolhido);


	if(numEscolhido == numSorteado){
		printf("Voce Ganhou!");
	}else{
		printf("Voce Perdeu, o numero sorteado foi: %d",numSorteado);
	};

	return 0;
}
