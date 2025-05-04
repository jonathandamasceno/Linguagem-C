#include <stdio.h>
// vetores
// array unidimensional
// char[50] -> é um vetor
    // dimensão de 50 caracteres

int main(){
    //vetores e strings
    char nome[50];
    printf("digite um nome: ");
    gets(nome);
    printf("%s\n", nome);

    //vetores e caracteres
    char letras[26];
    int contador = 0;
    for(int i = 97; i<=122; i++){
        letras[contador] = i;
        contador++;
    }
    for(int i = 0; i<26; i++){
        printf("%d == %c\n", letras[i], letras[i]);
    }

    return 0;
}