#include <stdio.h>
int main(){
    FILE *arq;

    int num, resultado, soma=0;

    arq = fopen("teste.txt", "r");

    if(arq){

        while(!feof(arq)){
            resultado = fscanf(arq, "%d", &num);

            // caso haja linhas em branco
            // só vai somar se retornar 1 (validar)
            if(resultado == 1){
                soma = soma + num;
            }
        }


        printf("a soma encontrada foi %d", soma);

        fclose(arq);
    }else{
        printf("arquivo nao encontrado");
    }


    return 0;

}