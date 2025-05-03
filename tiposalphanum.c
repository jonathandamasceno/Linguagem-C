#include <stdio.h>
/*

tipos alfanumericos:
    caracteres
    strings

    -> em C, nao existe strings (nativamente)

    string: "frases completas"
    caractere: "f"

*/


int main(){
    // variavel para caractere
    char opcao;
    float saldo = 0, deposito, transferencia;

    /*fazendo um menu com opções*/
    printf("banco //\n");
    printf("a. saldo\n");
    printf("b. deposito\n");
    printf("c. transferir\n");
    printf("escolha uma opcao:");

    scanf("%c", &opcao);

    // opcao escolhida
    if (opcao == 'a'){
        printf("seu saldo e de: R$%.2f", saldo);
    }
    else if (opcao == 'b'){
        printf("digite o valor do deposito: ");
        scanf("%f", &deposito);

        saldo = saldo + deposito;
    }
    else if (opcao == 'c'){
        printf("digite o valor da tranferencia: ");
        scanf("%f", &transferencia);
    }
    else{
        printf("opcao invalida.");
    }
    
    return 0;
}