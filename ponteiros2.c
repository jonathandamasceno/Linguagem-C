#include <stdio.h>
int main(){
    int num;

    int* ponteiro;

    printf("dig um numero: ");
    scanf("%d", &num);

    ponteiro = &num; // recebe o endereco de memoria de num 

    printf("endereco: %d\nponteiro: %p\n", &num, ponteiro);
    printf("variavel: %d\n", num);

    return 0;
}