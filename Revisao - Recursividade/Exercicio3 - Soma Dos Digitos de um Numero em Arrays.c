#include <stdio.h>
#include <stdlib.h>

int SomaArray (int arr[], int n){
    //CASO BASE
    if(n <= 0){
        return 0;
    }
    //CASO RECURSIVO
    return arr[n-1] + SomaArray(arr, n-1);
}


int main(void){

    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int resultado = SomaArray(array, tamanho);
    printf("A soma dos elementos do array é: %d ", resultado);
    return 0;


}
