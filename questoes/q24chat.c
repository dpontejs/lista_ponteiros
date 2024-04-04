#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>


int main(void){
    unsigned long saida; unsigned char mat[8][8]; 

    srand(time(NULL));    
    saida = 0;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            mat[i][j] = rand() % 2;
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            saida |= (unsigned long)mat[i][j] << (i * 8 + j);
        }
    }
    

    printf("%lu", saida);
}