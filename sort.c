#include <stdio.h>

    /*
    atividade da faculdade
    */

int main(){

    int array[10] = {7, 3 , 5, 22, 48, 2, 1, 10, 6, 55};

    // descobrindo o valor do array
    int length = sizeof(array) / sizeof(array[0]);

    // ordenando
    for(int i=length; i>0; i--){
        for(int j=0; j<i; j++){
            int temp = array[i];
            if(array[j] > temp){
            
                array[i] = array[j];
                array[j] = temp;

            }
        }

    }

    // ordenado
    for(int k=0; k<length; k++){
        printf("%d ", array[k]);
    }



}