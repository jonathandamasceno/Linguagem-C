#include <stdio.h>
int main(){
    char c;
    FILE *arq;

    arq = fopen("teste.txt", "r"); 
    char nome[10], *resultado;

    if(arq){
        // feof -> file end of file
        // enquanto nao chegar no final do arquivo
        while((resultado = fgets(nome, sizeof(nome), arq)) != NULL){
            // fgets = file gets

            /*
            pega os 10 primeiros caracteres 
            encontrados e coloca na variavel nome
            */
            printf("%s", nome);
           
        }
        
        fclose(arq);
        
    }else{
        printf("arquivo nao encontrado");
    }

    return 0;
}