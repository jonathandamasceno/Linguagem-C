#include <stdio.h>
int main(){
    // tipos de dados booleanos 
    // verdadeiro / falso
    // true / false

    /*nao existe *bool* na linguagem C (nativamente)*/
    /*mas reconhece 0 como false e qualquer outro valor como true*/

    int boolean = 10;
    if (boolean){
        printf("verdadeiro");
    }
    else{
        printf("falso");
    }

    return 0;
}