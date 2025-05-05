#include <stdio.h>
// c permite operações de baixo nivel
// com char, int e long int

// not -> ~
// deslocamento de bits à esquerda -> <<
// deslocamento de bits à direita -> >>
int main(){

    int numero = 2;
    numero = numero << 2;
    // 2 em binario -> 0000 0010
    // movendo duas casas -> 0000 1000 (vira 8)

    //numero = numero >> 1;
    // vira 1

    // numero = ~numero;

    printf("%d", numero);

    return 0;
}