#include <stdio.h>
/*

Faça um programa que leia um vetor de 10 posições 
e atribua valor 0 para todos os elementos que
possuírem valores negativos.

*/

int main(){
    int vetor[10], contador = 0, valor;

    for(int i=0; i<10; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &valor);

        vetor[i] = valor;
        contador++;
    }
    for(int i=0; i<10; i++){
        if (vetor[i] < 0){
            vetor[i] = 0;
        }
        printf("%d\n", vetor[i]);
    }

    return 0;
}