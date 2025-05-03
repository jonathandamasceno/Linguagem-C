#include <stdio.h>
/*

operações matematicaas

soma +, subtração-, multiplicar*, 
dividir/, resto da divisão (modulo)%,
elevar ao quadrado x*x

*/

int main(){
    int num1, num2;
    num1 = 17;
    num2 = 35;

    //soma
    int soma = num1 + num2;
    printf("%d\n", soma);
    //subtração
    int subtracao = num1 - num2;
    printf("%d\n", subtracao);
    //multiplicação
    int multiplicacao = num1 * num2;
    printf("%d\n", multiplicacao);
    //divisão
    float divisao = num1 / num2;
    printf("%.2f\n", divisao);
    //potencia
    int potencia = num1 * num1;
    printf("%d\n", potencia);

    //módulo -> descobrindo se é par ou impar
    if (num1 %  2 != 0){
        printf("impar");
    }
    else{
        printf("par");
    }
    
    return 0;
}