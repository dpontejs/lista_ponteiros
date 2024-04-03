#include <stdio.h>

int main() {
    int vet[] = {4, 9, 13};
    int i;

    for (i = 0; i < 3; i++) {
        printf("%d ", *(vet+i));
    }

    for (i = 0; i < 3; i++) {
        printf(" %p ", vet+i);
    }
    
    return 0;
}

/* 
Imprimem os valores presentes no vetor e suas posicões de memória
*/