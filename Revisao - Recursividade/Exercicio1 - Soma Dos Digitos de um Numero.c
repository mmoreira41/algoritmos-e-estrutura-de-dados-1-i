#include <stdio.h>
#include <stdlib.h>

int SomaNumeros (int n){
    //CASO BASE
    if(n < 10){
        return n;
    }
    //CASO RECURSIVO
    return n%10 + SomaNumeros(n/10);
}


int main(void){

    int numero = 0;
    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);

    printf("A soma dos digitos dos numeros (%d) e: %d", numero, SomaNumeros(numero));

}
