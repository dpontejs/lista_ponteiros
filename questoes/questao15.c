#include <stdio.h>
#include <stdlib.h>

void sortCrescente(int *numeros, int n){
   int temp, i, j, k;
   for (j = 0; j < n; j++){
      for (k = j + 1; k < n; k++){
         if (numeros[j] > numeros[k]){
            temp = numeros[j];
            numeros[j] = numeros[k];
            numeros[k] = temp;
         }
      }
   }
    printf("Ordem crescente\n");
    for (i = 0; i < n; i++){
          printf("%d\n", numeros[i]);
    }
}

int main() {
    int c;
    int n;
    int *x;
    printf("Digite a quantidade de numeros:\n");
    scanf("%d", &n);

    x = malloc(n*sizeof(int));

    for (c = 0; c < n; c++){
        scanf("%d", &x[c]);
    }

    sortCrescente(x, n);
    free(x);
    return 0;
}
