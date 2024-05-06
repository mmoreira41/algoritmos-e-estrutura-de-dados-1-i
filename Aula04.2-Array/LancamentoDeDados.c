#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolarDados(){
    return rand() %6 + 1;
}

int calcularSoma( int dado1, int dado2){
    return dado1 + dado2;
}

int main(){

    srand(time(NULL));

    int jogador1[2];
    int jogador2[2];
    int numJogadas = 0;
    char condicao;

    printf("Deseja jogar os dados s/n? ");
    scanf(" %c", &condicao);

    while(condicao == 's'){
        for( int i=0; i<=1; i++){
        jogador1[i] = rolarDados();
        jogador2[i] = rolarDados();
        historicoJogador1[numJogadas][i] = jogador1[i];
    }
    numJogadas++;

    int resultJog1 = calcularSoma(jogador1[0],jogador1[1]);
    int resultJog2 = calcularSoma(jogador2[0],jogador2[1]);

    printf("Dados sorteados pelo jogador 1: ");
    for(int i = 0; i<2;i++){
        printf(" %d ",jogador1[i]);
    }
    printf("\nSua Soma: %d\n\n", resultJog1);


    printf("Dados sorteados pelo jogador 1: ");
    for(int i = 0; i<2;i++){
        printf(" %d ",jogador2[i]);
    }
    printf("\nSua Soma: %d\n\n ", resultJog2);


    if(resultJog1>resultJog2){
        printf("Jogador 1 Venceu!!");
    } else if(resultJog2>resultJog1){
        printf("Jogador 2 Venceu!!");
    } else{
        printf("Empate");
    }

    printf("Deseja jogar os dados s/n? ");
    scanf(" %c", &condicao);
    getchar();



    }

    printf("HIstorico de jogadas do jogador 1: \n");
    for(int i = 0; i < numJogadas; i++){
        printf("Jogada %d: Dado 1: %d. Dado 2: %d.\n", i+1, historicoJogador1[i][0],historicoJogador1[i][1]);
    }



}
