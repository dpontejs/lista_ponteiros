#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int **A, int **B, int **C, int linhaA, int colA, int colB) {
    for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colB; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimir_matriz(int **A, int linhaA, int colA) {
    for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colA; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void preencher_matriz(int **A, int linhaA, int colA) {
    for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colA; j++) {
            scanf("%d", &A[i][j]);
        }
    }
}

int main() {
    
    int **ptrA, **ptrB, **ptrC; 

    int linhaA=1, colA=2, linhaB=2, colB=2, linhaC=1, colC=2;

    ptrA = malloc(linhaA*sizeof(int*));
    ptrA[0] = malloc(colA*linhaA*sizeof(int));
    for (int i = 1; i<linhaA; i++) {
        ptrA[i] = ptrA[i-1]+colA;
    }

    ptrB = malloc(linhaB*sizeof(int*));
    ptrB[0] = malloc(colB*linhaB*sizeof(int));
    for (int i = 1; i<linhaB; i++) {
        ptrB[i] = ptrB[i-1]+colB;
    }

    ptrC = malloc(linhaC*sizeof(int*));
    ptrC[0] = malloc(colC*linhaC*sizeof(int));
    for (int i = 1; i<linhaC; i++) {
        ptrC[i] = ptrC[i-1]+colC;
    }
    
    preencher_matriz(ptrA, linhaA, colA);
    preencher_matriz(ptrB, linhaB, colB);

    multiplica_matrizes(ptrA, ptrB, ptrC, linhaA, colA, colB);

    imprimir_matriz(ptrA, linhaA, colA);
    imprimir_matriz(ptrB, linhaB, colB);
    imprimir_matriz(ptrC, linhaC, colC);

    free(ptrA[0]);
    free(ptrA);

    free(ptrB[0]);
    free(ptrB);

    free(ptrC[0]);
    free(ptrC);

    return 0;
}