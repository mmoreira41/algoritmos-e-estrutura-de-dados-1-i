#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numeros[5];
    int soma = 0;
    double media = 0.0;


    printf("Digite 5 numeros abaixo :\n");
    for(int i = 0; i<5; i++){
        printf("Numero %d: ",i+1);
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
    }
    media = (double)soma / 5;
    printf("A soma dos numeros digitados e: %d, logo a media e: %.2lf ",soma , media);
    return 0;

}
