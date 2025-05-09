#include <stdio.h>

/*

Faça um programa que tenha uma função que receba 
um vetor de inteiros como parâmetro e retorne o
maior valor

*/


int maior_num(int numeros[]){

    int maior=0;
    for(int i=0; i<5; i++){
        if(i!=0){
            if(maior < numeros[i]){
                maior = numeros[i];
            }
        }
    }

    return maior;
}


int main(){
    int numeros[5], num_dig;

    for(int i=0; i<5; i++){
        printf("digite o %d numero: \n> ", i+1);
        scanf("%d", &num_dig);

        numeros[i] = num_dig;
    }

    printf("%d", inteiros(numeros));

    return 0;
}