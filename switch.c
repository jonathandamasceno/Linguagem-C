#include <stdio.h>
    /*introdução aos switches*/
    /*funciona de forma parecida com o if, else if e else*/
    /*bom em casos que se usaria muitas condicionais*/

    /*estrutura*/
    /*

    cada instrução tem que ter um break

    switch(variavel)
    Inicio
        case valor1:
            Instruções;
            break;            
        case ''2:
            Instruções;
            break;
        case ''3:
            Instruções;
            break;
        case ''4:
            Instruções;
            break;
    */
   int main(){
    int valor;
    printf("digite um numero de 1 a 5: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("%d", valor);
        break;
    case 2:
        printf("%d", valor);
        break;
    case 3:
        printf("%d", valor);
        break;
    case 4:
        printf("%d", valor);
        break;
    case 5:
        printf("%d", valor);
        break;
    default:
        printf("valor invalido");
        break;
    }
    
    return 0;
}