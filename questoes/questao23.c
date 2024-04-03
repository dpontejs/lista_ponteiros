#include <stdio.h>
#define TAM 10
int funcao1(int vetor[], int v){
    int i;
    for (i=0; i < TAM; i++){
        if (vetor[i] == v) {
            return i;
        }
    }
    return -1;
}
int funcao2(int vetor[], int v, int i, int f){
    int m = (i + f) / 2;
    if (v == vetor[m]) {
        return m;
    }
    if (i >= f) {
        return -1;
    }
    if (v > vetor[m]) {
        return funcao2(vetor, v, m+1, f);
    } else {
        return funcao2(vetor, v, i, m-1);
    }
}
int main() {
    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
    return 0;
}

/* 
É correto o que se afirma apenas na primeira afirmacão, pois a funcao2
faz uma busca por meio de uma abordagem recursiva, dividindo o vetor pela metade e buscando de acordo com isso,
desse modo se tornando mais rápida (afirmacão 2) e usando uma estratégia recursiva e não iterativa (afirmacão 3)
*/