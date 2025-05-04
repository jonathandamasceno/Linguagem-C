#include <stdio.h>
int main(){
    int num_int[2][2];
    float num_float[5][5];

    /*
    [0][0] [0][1]
    [1][0] [1][1]
    */
    num_int[0][0] = 1;
    num_int[0][1] = 2;
    num_int[1][0] = 3;
    num_int[1][1] = 4;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d", num_int[i][j]);
        }
    }

    return 0;
}