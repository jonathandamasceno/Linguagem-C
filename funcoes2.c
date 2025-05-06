#include <stdio.h>
// protótipos de funções
// assinatura das funções
/*
- nome 
- tipo de retorno (caso retorne algo)
- parametros de entrada (caso precise)
*/

int soma(int num1, int num2); // -> um prototipo
void mensagem();

int main(){
    int n1, n2, res;

    printf("primeiro numero: ");
    scanf("%d", &n1);

    printf("segundo numero: ");
    scanf("%d", &n2);

    res = soma(n1, n2);
    mensagem(); 
    printf("a soma de %d e %d: %d",n1, n2, res);

    return 0;
}

/*faz com que possa escrever a 
função completa após a função main*/
int soma(int num1, int num2){
    return num1 + num2;
} 

void mensagem(){
    printf("Hello World!\n");
}