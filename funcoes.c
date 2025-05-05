#include <stdio.h>
/*

main -> função principal que sempre sera executada
estrutura das funções

- tipo de retorno 
- nome
- parametros de entrada (opcional)
- implementação
- retorno 

void -> vazio
 */

void mensagem(){
    printf("Hello world\n");
}

int soma(int num1, int num2){
    return num1 + num2;
    // tem que retornar o valor dado no inicio da função
}

char* retorna_char(char* caractere){
    return caractere;
}

int main(){
    // chamando a função
    mensagem();
    printf("%d", soma(5,15));
    printf("%s", retorna_char("\nfrase aleatoria"));
    return 0;
}