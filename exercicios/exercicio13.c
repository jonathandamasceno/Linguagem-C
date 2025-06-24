#include <stdio.h>
/*

Faça um programa que declare um inteiro, um real e um char, 
e ponteiros para inteiro, real e char. Associe as variáveis 
aos ponteiros (use &). Modifique os valores de cada variável 
usando os ponteiros. Imprima osvalores das variáveis antes 
e após a modificação. 

*/
int main(){

    // declarando variaveis
    int num_inteiro;
    float num_float;
    char caractere;
    
    // pegando o endereço de cada um e colocando em outras variaveis
    int* p_int = &num_inteiro;
    float* p_float = &num_float;
    char* p_char = &caractere;

    // mudando o valor da variavel pelo endereço dela
    *p_int = 15;
    *p_float = 16.6;
    *p_char = 97; // a -> ascii

    // mostrando valores
    printf("%d - %.2f - %c ", num_inteiro, num_float, caractere);

    return 0;
}