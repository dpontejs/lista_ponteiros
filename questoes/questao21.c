#include <stdio.h> 
#include <stdlib.h> 

// Resposta: Alternativa C

int f(char *data){
    void *s;
    s = malloc(50); // Memória é alocada
    int size = strlen(data);
    if (size > 50){  // Caso a condição do if seja atendida
        return(-1);  // A função retornará -1, ou seja, sua execução será interrompida antes do pedaço de memória ser liberado
    }
    free(s); // Memória só é liberada se o tamanho do vetor for igual ou menor a 50, ou seja, se o bloco de comandos do if NÃO for executado
    return 0;
}
