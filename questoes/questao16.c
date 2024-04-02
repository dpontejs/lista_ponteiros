#include <stdio.h> // Importa bibliotecas do C
#include <stdlib.h> // Importa bibliotecas do C

int compare (const void * a, const void * b) // Função que compara valores utilizada pela função qSort
{
  return ( *(int*)a - *(int*)b ); // Retorna um número positivo, caso a>b, retorna um número negativo, caso a<b ou retorna 0 caso a = b, comparando assim, os valores
}


int main() { // função main
    int c; // declara variável de contagem do for
    int n; // declara variavel da quantidade de numeros do array
    int *x; // declara um ponteiro para x que guardará o primeiro endereço do array
    printf("Digite a quantidade de numeros:\n"); // Instruções para o usuário
    scanf("%d", &n); // grava a quantidade de numeros no array na variável n

    x = malloc(n*sizeof(int)); // aloca um pedaço da memória de tamanho n vezes o tamanho do inteiro na arquitetura da máquina

   
    for (c = 0; c < n; c++){
        printf("Digite o %d numero do array:\n", (c+1)); // Instruções para o usuário
        scanf("%d", &x[c]); // preenche o array de números fornecidos para o usuário
    }
    
    qsort(x, n, sizeof(int), compare); // função que organiza o array em ordem crescente
    for (c = 0;  c < n; c++){
        printf("%d\n", x[c]); // printa os numeros do array em ordem crescente
    }
    free(x); // libera o pedaço de memória de X
    return 0;
}
