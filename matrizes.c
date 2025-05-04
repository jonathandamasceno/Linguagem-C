#include <stdio.h>
/*
matrizes 
array multidimensional
ex.: char nome[5][5];
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]


array unidimensional
ex.: char nome[5];
[0][1][2][3][4]
*/ 


int main(){
    char nome[3][50];
    // nome[x][y] -> x = numero de strings que pode ter
    //            -> y = tamanho que a string pode ter 

    for(int i=0; i<3; i++){
        printf("nome %d: ", i);
        gets(nome[i]);
    }

    printf("nomes digitados: \n");
    for(int i=0; i<3; i++){
       printf("%s\n", nome[i]);
    };


    return 0;
}