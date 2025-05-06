#include <stdio.h>
#include <stdlib.h>
#include "ajuda.h" 

// int soma(int num1, int num2);
// int multiplica(int num1, int num2);

int main(){
    int n1, n2, ret_s, ret_m;
    mensagem();

    printf("primeiro numero: ");
    scanf("%d", &n1);

    printf("segundo numero: ");
    scanf("%d", &n2);

    ret_s = soma(n1, n2);
    ret_m = mult(n1, n2);

    printf("soma entre %d e %d: %d\n", n1, n2, ret_s);
    printf("multiplicacao entre %d e %d: %d\n", n1, n2, ret_m);

    return 0;
}
/*
int soma(int num1, int num2){
    return num1 + num2;
}

int multiplica(int num1, int num2){
    return num1 * num2;
}
*/