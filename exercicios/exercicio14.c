#include <stdio.h>
int main(){

    int num1, num2;

    printf("digite o 1o numero inteiro: ");
    scanf("%d", &num1);


    printf("digite o 1o numero inteiro: ");
    scanf("%d", &num2);

    if(&num1 > &num2){
        printf("num1 = %p\n", &num1);
        printf("%d\n", num1);
        printf("endereco num2 = %p\n", &num2);
    }else{
        printf("num2 = %p\n", &num2);
        printf("%d\n", num2);
        printf("endereco num1 = %p\n", &num1);
    }

    return 0;
}