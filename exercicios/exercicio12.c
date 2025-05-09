#include <stdio.h>
/*

Faça um programa que tenha uma função que dado um 
valor numérico de entrada, gere e imprima como
saída o número de linhas com pontos de exclamação, 
conforme exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!! 

*/
void imprime(int num){
    for(int i=0; i<=num; i++){
        for(int j=0; j<i; j++){
            printf("!");
        }
        printf("\n");
    }
}

int main(){

    imprime(6);
    
    return 0;
}