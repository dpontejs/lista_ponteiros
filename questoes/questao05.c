#include <stdio.h>

int main() {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");

    for (i = 0; i <= 4; i++) {
        printf("i = %d", i);
        printf(" vet[%d] = %.1f", i, vet[i]);
        printf(" *(f + %d) = %.1f", i, *(f + i));
        printf(" &vet[%d] = %p", i, &vet[i]);
        printf(" (f + %d) = %p", i, f+i);
        printf("\n");
    }

    return 0;
}

/* 
É mostrado que os operadores vet[] e *(f), e &vet[] e (f) são eqivalentes
*/