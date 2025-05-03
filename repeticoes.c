#include <stdio.h>
#include <stdbool.h>
/*
estruturas de repeticao

for, while e do while
*/
int main(){
    int numero, soma = 0;

    // pra i = (valor), enquanto i(condição), faça algo
    for (int i = 0; i < 5; i++){
        printf("digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;
    }
    printf("%d", soma);


    /*
    checa depois de realizar a ação
    do {
        printf("digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero

    } while (numero != 0);
    */

    // usando while -> checa antes de realizar a ação 
    /*while (true) {
        printf("digite um numero: ");
        scanf("%d", &numero);
        if (numero==0){
            break;
        }
        soma = soma + numero;
    }
    printf("\n%d", soma);
    */

    /*teste*/
    /*
    if (numero!=99){
        int i = 0;
        while (i <= numero){
            printf("%d\n", i);
            i++;
        }
    }
    */
    return 0;
}