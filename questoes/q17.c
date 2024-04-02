#include <stdio.h> 
#include <stdlib.h> 

int compareInt (int  a, const int  b) 
{
  return ( a - b ); // Retorna um número positivo, caso a>b, retorna um número negativo, caso a<b ou retorna 0 caso a = b, comparando assim, os valores
}


void sortCrescente(int *numeros, int n, int (*comparar)(int,int)){
   int temp, i, j, k;
   for (j = 0; j < n; j++){
      for (k = j + 1; k < n; k++){
         if (comparar(numeros[j], numeros[k]) > 0){
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


int main(void) {
    int c; 
    int n; 
    int *x; 
    printf("Digite a quantidade de numeros:\n"); 
    scanf("%d", &n); 

    x = malloc(n*sizeof(int)); 

   
    for (c = 0; c < n; c++){
        printf("Digite o %d numero do array:\n", (c+1)); 
        scanf("%d", &x[c]); 
    }
    
    int(*compare)(int,int) = compareInt;
    

    sortCrescente(x, n, *compare);

}
