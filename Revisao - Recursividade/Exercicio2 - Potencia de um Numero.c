#include <stdlib.h>
#include <stdio.h>

int potencia(int base, int expo){
    //caso base
    if(expo == 0){
        printf("\nPotencia %d elevado a %d retorna 1.\n", base, expo);
        return 1;
    }

    int result;

    if(expo>0){
        result =  base * potencia(base, expo - 1);
    }

    printf("\nPotencia base %d elevado a %d retorna %d. \n", base, expo,result);
    return result;
}


int main(void){

    int base = 0;
    int expoente = 0;


    printf("Digite a base do numero : ");
    scanf("%d", &base);
    printf("\nAgora digite seu expoente : ");
    scanf("%d", &expoente);


    printf("\nResultado: %d", potencia(base,expoente));

}
