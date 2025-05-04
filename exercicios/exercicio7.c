#include <stdio.h>
/*
1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa
deve executar os seguintes passos:
a) Atribula os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
b) Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5] do vetor
e mostre na tela esta soma;
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
d) Mostre na tela cada valor do vetor A, um em cada linha. 

*/
int main(){
    int A[6] = {1,0,5,-2,-5,7}; // jeito que da pra fazer
    int soma = 0; // soma = A[0] + A[1] + A[5];
    /*
    
    jeito que eu fiz
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
    
    */
   
    // a)
    for(int i=0; i<6; i++){
        // b)
        if(i == 0 || i == 1 || i == 5){
            soma = soma + A[i];
        }
        // c)
        if(i == 4){
            A[i] = 100;
        }
    }
    printf("SOMA: %d\n", soma);

    // d)
    for(int i=0; i<6; i++){
        printf("No posicao %d: %d\n",i, A[i]);
    }

    return 0;
}