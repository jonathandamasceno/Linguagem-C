#include <stdio.h>
int main(){
    int num;
    int maior, menor;

    // loop que pega os numeros
    for(int i=1; i<11; i++){
        printf("digite o %d. numero: ", i);
        scanf("%d", &num);

    // primeiro loop define maior e menor
        if(i==1){
            maior = num;
            menor = num;
        }
        else {
            // se o valor escolhido for maior que o anterior
            if(num > maior){
                maior = num;
            }
            // se o valor escolhido for menor que o anterior
            if(num < menor){
                menor = num;
            }
        }
    }
    printf("%d, %d", maior, menor);
}