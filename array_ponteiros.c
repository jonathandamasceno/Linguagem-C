#include <stdio.h>
int main(){
    int array[5];   
    for(int i=0; i<5; i++){
        printf("diga o valor No %d > ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\narray completo > ");
    for(int i=0; i<5; i++){
        printf("%d ", array[i]);
    }

    printf("\n%p %d\n", &array, array[0]);
    printf("%p %d\n", array, array[0]);

// parte 2

    for(int i=0; i<5; i++){
        printf("o valor %d tem %u bytes\n", array[i], sizeof(array[i]));
    }
    printf("1o valor = %d\nendereco = %p", array[0], array+1);

    return 0;
}