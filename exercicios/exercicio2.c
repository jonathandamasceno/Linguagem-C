#include <stdio.h>

int main(){
    // definindo variaveis
    float not1, not2, not3, not4;
    float media;

    // pegando os valores
    printf("nota 1: ");
    scanf("%f", &not1);

    printf("nota 2: ");
    scanf("%f", &not2);

    printf("nota 3: ");
    scanf("%f", &not3);

    printf("nota 4: ");
    scanf("%f", &not4);

    // definindo valor da media
    media = (not1+not2+not3+not4) / 4;

    printf("media aritimetica: %.2f", media);

}