#include <stdio.h>

int main(){
    int idade; 

    printf("idade: ");
    scanf("%d", &idade);

    /* estrutura condicional: if -> else if -> else */
    if (idade < 18){
        printf("menor de idade\n");
    }
    else if(idade >= 18 && idade < 60){
        printf("adulto(a)\n");
    }
    else{
        printf("idoso(a)\n");
    }
    printf("sua idade: %d", idade);

    return 0;
}