#include <stdio.h>
#include <stdlib.h>


/*Exercicio 1 - Escreva  um programa que mostre os numeros pares multiplos de 3, positivos até o Numero 1000;
  int MultiplosTresEDois{
    for(int x = 0; x<=1000;x++){
            if(x%3==0 && x%2==0){
                printf("%d\n",x);
            }
    }
  }



/*Exercicio 2 - Faça um Programa que leia 10 numeros inteiros, calcule e mostre sua soma e media

FUNCAO FORA DO MAIN:
    int SOMA(int a){
        static int c = 0;
        c += a;
        return c;
    }

DENTRO DO MAIN:
    int num = 0;
    int soma = 0;

    for(int i=0; i<10; i++){
        printf("Digite um numero:");
        scanf("%d",&num);
        soma = SOMA(num);
    }
    float media = soma/10;
    printf("A soma dos numeros e %d\n.Sua media e:%2.lf\n",soma,media);
    return 0;

*/

/*EXERCICIO 3 - Escreva um programa que calcule a area de 4 comos de uma casa. O programa deverá ler a largura e o comprimento de cada comodo, calcular e mostrat a area de cada um

FUNCAO FORA DA MAIN:
    int CalcularArea(int a, int b){
        static int c = 0;
        c = a*b;
        return c;
    }
FUNCAO DENTRO DA MAIN:
    int largura = 0;
    int comprimento = 0;

    for(int i=1; i<=4; i++){
        printf("Digite a largura do comodo %d: ", i);
        scanf("%d",&largura);
        printf("Agora Digite o comprimento do comodo %d: ", i);
        scanf("%d",&comprimento);
        int ResultArea = CalcularArea(largura,comprimento);

        printf("A Area do comodo %d e: %d\n\n", i, ResultArea);
    }
*/



int main(void){

  float valor;
  float valorFinal;
  int escolha;


  printf("Digite o Valor da compra: ");
  scanf("%f",&valor);


  printf("Escolha a forma de Pagamento: \n1-A Vista \n2-Parcelado 2x \n3-Parcelado 3x\n\nDigite a opcao de 1 a 3: ");
  scanf("%f", &escolha);

  switch(escolha){

  case 1:
        valorFinal = valor-(valor/10);
        printf("Voce ganhou 10% de desconto, o novo valor e: %d\n", valorFinal);
        break;

  case 2:
        valorFinal = valor/2;
        printf("Você dividiu o valor em 2x, então sera duas prestacoes de: %d\n", valorFinal);
        break;

  case 3:
        valorFinal = valor/3;
        printf("Você dividiu o valor em 3x, então sera duas prestacoes de: %d\n", valorFinal);
        break;
  default:
        printf("Numero indefinido");
        break;

  }



}
