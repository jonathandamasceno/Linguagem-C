#include <stdio.h>
#include <stdbool.h>
int main(){
    // mostrar os 5 primeiros multiplos de 3
    int contador = 0, i = 0;
    
    // posso fazer while(1) -> da no mesmo que while(true)
    while(true){
        // i vai ser oq vai mudar pra descobrir multiplos de 3
        i++;
        if(i%3==0){
            printf("%d eh divisor de 3\n", i);
            //contador vai dizer quando achou os 5
            contador++;
        }
        // contador para o loop quando acha os 5 multiplos
        if(contador==5){
            break;
        }
    }
}