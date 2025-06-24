#include <stdio.h>

/*
Faça um programa que contenha um array de inteiros 
contendo 5 elementos. Utilizando apenas aritmética
de ponteiros, leia este array do teclado e imprima 
o dobro de cada valor lido.
*/

int main(){

    int array[5];
    // pega os valores pelo teclado
    for(int i=0; i<5; i++){
        printf("num %d: ", i+1);
        scanf("%d", &array[i]);
    }

    // faz as operações
    for(int i=0; i<5; i++){
        printf("%d\n", *(array + i)*2);
        // é como se fosse o array[i]

    }

    return 0;
}