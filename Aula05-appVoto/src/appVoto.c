/*
 ============================================================================
 Name        : appVoto.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(void){


int votoCandidatoA = 0;
int votoCandidatoB = 0;
int escolha = 0;
bool condWhile = true;

while(condWhile){


    printf("\nPreciso que escolha as opções abaixo de acordo com o seu numero: \n1-Votar Candidato A. \n2-Votar Candidato B. \n3-Ver Resultado. \n4-Sair \nNumero Escolhido: ");
    scanf("%d",&escolha);

    switch (escolha){

    case 1:
        votoCandidatoA++;
        printf("Voto cadastrado... \n");
        continue;
    case 2:
        votoCandidatoB++;
        printf("Voto cadastrado... \n");
        continue;
    case 3:
        printf("\nO resultado da votação foi:\nVoto Candidato A: %d \nVoto Candidato B: %d \n", votoCandidatoA, votoCandidatoB);
        votoCandidatoA > votoCandidatoB ? printf("O Ganhador foi o Candidato A!") : printf("O Ganhador foi o Candidato B!");
        break;
    case 4:
        printf("saindo...");
        condWhile = false;
        break;

    }
    return 0;
}






}
