#include <stdio.h>

int main(){
    // definindo variaveis
    int n1, n2, n3;
    int q1, q2, q3;

    // pegando os valores
    printf("numero 1: ");
    scanf("%d", &n1);

    printf("numero 2: ");
    scanf("%d", &n2);

    printf("numero 3: ");
    scanf("%d", &n3);

    // quadrados dos valores
    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;

    // soma dos quadrados
    int soma = q1 + q2 + q3;
    printf("A soma dos quadrados de %d, %d e %d e: ", n1, n2, n3);
    printf("%d", soma);
}