#include <stdio.h>
/*
& -> para pegar e mandar o endereço da variavel pra função
* -> converte de volta pro valor da variavel
++ antes da variavel -> incrementa o valor antes de imprimir
*/

void incrementa(int* contador){
    printf("num vale %d\n", ++(*contador));
}

int main(){
    int contador = 10;
    
    printf("o contador tem o valor de %d\n", contador);

    incrementa(&contador);

    printf("depois de adicionar valor: %d\n", contador);

    return 0;
}