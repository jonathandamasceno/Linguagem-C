#include <stdio.h>
int main(){

    FILE *arq;
    char conteudo[30];

    // 'a' -> append (adiciona conteudo sem substituir)
    arq = fopen("arquivo_criado.txt", "a");

    if(arq){
        printf("digite algo: \n>");
        fgets(conteudo, 30, stdin);

        // standard input (stdin)
        while(conteudo[0] != '0'){
            fputs(conteudo, arq); // coloca o conteúdo no arquivo

            printf("\ndigite algo(ou 0 pra sair): \n>");
            fgets(conteudo, 30, stdin);
        }


        fclose(arq);
    }else{
        printf("arquivo nao encontrado");
    }


    return 0;
}