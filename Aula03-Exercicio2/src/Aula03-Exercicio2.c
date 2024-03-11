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


int main(void) {

    int numRodadas = 0;
    int condicao = 0;


    while(condicao != -1 ){
        printf("Digite um numero inteiro, para encerrar digite -1: ");
        scanf("%d",&condicao);
        numRodadas++;

        }

    printf("Voce digitou %d numeros; \n", numRodadas);

    return 0;
}
