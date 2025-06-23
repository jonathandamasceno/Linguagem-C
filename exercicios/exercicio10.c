#include <stdio.h>
/*

Faça um programa que tenha uma função que receba 
um vetor de inteiros como parâmetro e retorne o
maior valor

*/


int maior_num(int numeros[], int tam){
    int maior = 0;

    for(int i=0; i<tam; i++){
        if(i==0){
            maior = i;
            
        }else{
            if(maior < numeros[i]){
                maior = numeros[i];
            }
        }
    }

    return maior;
}


int main(){
    int tam=10,numeros[tam], num_dig;

    for(int i=0; i<tam; i++){
        printf("digite o %d numero: \n> ", i+1);
        scanf("%d", &num_dig);

        numeros[i] = num_dig;
    }

    printf("%d", maior_num(numeros, tam));

    return 0;
}