#include <stdio.h>
int main(){
    // int num1, num2; // -> numero inteiro 1, 2, 3...
    // float num2; // -> numero real 1.4, 6.2, 9,5...
    // double num3; // -> numeros reais mas alcança mais caracteres decimais (mais preciso)

    /*
    %d -> int
    %f -> float
    %lf -> double
    */

    float num1, num2;
    
    printf("digite um valor: ");
    scanf("%f", &num1);

    printf("digite um valor: ");
    scanf("%f", &num2);
    
    float media = (num1 + num2) / 2;
    printf("media: %.2f", media);

    return 0;
    
}