/*
 ============================================================================
 Name        : appBasquete.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


char TimeFeminino(idade, altura){

    if(altura >= 180 && idade > 16){
        printf("apto a jogar no time Feminio Juvenil de Basquete");
    }else{
        printf("Nao apto");
    };

}
char TimeMasculino(idade, altura){

    if(altura >= 180 && idade > 16){
        printf("apto a jogar no time Masculino Juvenil de Basquete");
    }else{
        printf("Nao apto");
    };
}


int main(void) {

    int idade = 0;
    int altura = 0;
    int sexo = 0;

    printf("Me diga sua idade: ");
    scanf("%d", &idade);
    printf("Me diga sua altura em cm: ");
    scanf("%d", &altura);
    printf("Me diga seu sexo (1 para Feminino e 2 para Masculino): ");
    scanf("%d", &sexo);

    if(sexo == 1){
        TimeFeminino(idade,altura);
    }else if(sexo == 2){
        TimeMasculino(idade,altura);
    }else{
        printf("Sexo Indefinido");
    };




}
