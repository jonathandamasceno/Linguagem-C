#include <stdio.h>
int main(){
    
    //vetores de inteiros
    int numeros[5];

    // dando valores pra cada posição
    numeros[0] = 31;
    numeros[1] = 32;
    numeros[2] = 33;
    numeros[3] = 34;
    numeros[4] = 35; 

    //vetores de reais
    float numerosr[5];
    for(int i=0; i<5; i++){
        numerosr[i] = (float)numeros[i] / (float)2;
    }
    for(int i=4; i>=0; i--){
        printf("%.2f\n", numerosr[i]);
    }

    return 0;
}