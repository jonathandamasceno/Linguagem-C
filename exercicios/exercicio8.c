#include <stdio.h>
/*

2. Faça um programa que leia um vetor de 10 posições. 
Conte e mostre quantos valores pares ele possui. 

*/
int main(){

    int vetor[10], contador = 0, valor;

    for(int i=0; i<10; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &valor);

        vetor[i] = valor;
        if(vetor[i] % 2==0){
            contador++;
        }
        
    }
    printf("esse vetor possui %d valores pares\n", contador);

    for(int i=0; i<10; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}