#include <stdio.h>
int main(){
    // gerar um alfabeto completo usando loop 

    // %c -> usa para char

    /*for(int i=65; i<=90; i++){
        printf("%c\n", i);
        // o programa converte pra caractere automaticamente pela tabela ascii
        // hexadecimal
    }
    */

    // strings em variaveis 
    char nome[50]; // declaração de string em c -> array
            // num de caracteres que suporta

    // %s -> usa pra string

    printf("qual seu nome: ");
    gets(nome); // pra receber string usa isso aqui
    printf("seu nome e: %s", nome);

    return 0;
}