#include <stdio.h>

/*

Faça um programa que tenha uma função que, 
dado um caractere qualquer de entrada, retorne o mesmo
caractere sempre em maiúsculo. 

*/

char maiusculo(char nletra){
    char letra_maiuscula = (int)nletra - 32;

    return letra_maiuscula;
}

int main(){
    printf("%c", maiusculo('p'));
}