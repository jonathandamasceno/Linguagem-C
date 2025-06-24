#include <stdio.h>
    /*
    w = write -> reescrever o conteúdo (ou criar o arquivo)
    r = read
    wa = adiçao de conteúdo (caso exista o arquivo)
    */

int main(){

    FILE *arq; // declarando a variavel arquivo

    // nome do arquivo e forma de abertura
    arq = fopen("teste.txt", "w"); 
  
    // fecha o arquivo
    fclose(arq);


    return 0;
}