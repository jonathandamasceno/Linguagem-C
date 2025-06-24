#include <stdio.h>
    /*
    w = write -> reescrever o conteúdo (ou criar o arquivo)
    r = read
    wa = adiçao de conteúdo (caso exista o arquivo)
    */

int main(){
    char c;
    FILE *arq; // declarando a variavel arquivo

    // nome do arquivo e forma de abertura
    arq = fopen("teste.txt", "r"); 

    // lendo o arquivo
    if(arq){
        // EOF = constante (end of file)
        while((c = getc(arq)) != EOF){
            printf("%c", c);
        }
    }else{
        printf("arquivo nao encontrado");
    }
    // fecha o arquivo
    fclose(arq);


    return 0;
}