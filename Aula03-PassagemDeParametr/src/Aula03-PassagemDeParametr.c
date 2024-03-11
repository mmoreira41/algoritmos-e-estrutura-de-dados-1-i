/*
 ============================================================================
 Name        : Aula03-Recursividade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void incrementarPorValor(int x);

void incrementarPorReferencia(int *x);


int main(void) {
	int numero = 10;
	incrementarPorValor(numero);
	printf("O valor da incrementação por valor é: %d\n", numero);

	incrementarPorReferencia(&numero);
	printf("O valor da incrementação por referencia é: %d\n", numero);

	return 0;
}


void incrementarPorValor(int x) {
	x++;
}

void incrementarPorReferencia(int *x){
	(*x)++;
}
