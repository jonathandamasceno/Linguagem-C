#include <stdio.h>

int main(){
    float v1, v2, v3, soma_v;
    float p1, p2, p3;
    float vr1, vr2, vr3;

    /*valores que cada um deu*/
    printf("1. Valor investido: ");
    scanf("%f", &v1);
    printf("2. Valor investido: ");
    scanf("%f", &v2);   
    printf("3. Valor investido: ");
    scanf("%f", &v3);

    int premio = (v1 + v2 + v3) * 5;

    /*sabendo como sera feita a divisão pela porcentagem*/
    /*total investido*/
    soma_v = (v1 + v2 + v3);

    /*quantos % cada um deu*/
    p1 = (v1 / soma_v);
    p2 = (v2 / soma_v);
    p3 = (v3 / soma_v);

    /*valor recebido de cada um*/
    vr1 = p1 * premio;
    vr2 = p2 * premio;
    vr3 = p3 * premio;

    /* */
    printf("a primeira pessoa vai receber: %.2f, um total de %.0f porcento do valor\n", vr1, (p1*100));
    printf("a segunda pessoa vai receber: %.2f, um total de %.0f porcento do valor\n", vr2, (p2*100));
    printf("a terceira pessoa vai receber: %.2f, um total de %.0f porcento do valor", vr3, (p3*100));

    return 0;
}