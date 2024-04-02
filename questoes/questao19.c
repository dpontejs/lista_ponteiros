#include <stdio.h> 
#include <stdlib.h> 

void soma_vetores(int *vet1, int *vet2, int *resultado, int n){
    int i;
    for (i = 0; i < n; i++){
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main(void){
    int n, i; int *x, *y, *resultado;
    
    printf("Digite a quantidade de numeros:\n"); 
    scanf("%d", &n); 

    x = malloc(n*sizeof(int)); 
    y = malloc(n*sizeof(int)); 
    resultado = malloc(n*sizeof(int)); 


    for (i = 0; i < n; i++){
        printf("\nDigite o %d numero do primeiro vetor:\n", (i+1));
        scanf("%d", &x[i]);
    }
    
    for (i = 0; i < n; i++){
        printf("\nDigite o %d numero do segundo vetor:\n", (i+1));
        scanf("%d", &y[i]);
    }
   
    soma_vetores(x, y, resultado, n);

    


    printf("Vetor resultado:\n");
    for (i = 0; i < n; i++){
          printf("%d ", resultado[i]);
    }

    free(resultado);
    free(x);
    free(y);    
    return 0;
}
