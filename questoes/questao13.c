// O memory leak ocorre quando um pedaço da memória é alocado para ser utilizado pelo programador e não é liberado posteriormente, causando um uso desnecessário de memória

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *dados;
  dados = malloc(10*sizeof(int*));
  return 0;
}

/* Essa função possui um malloc, porém não possui um free correspondente. Vale salientar que é possível existir uma função com malloc, 
com a ausência de um free, porém, em algum momento do código essa memória precisa ser liberada. Nesse caso, a função exibida é a "main", não tendo assim,
nenhuma outra função que poderia realizar essa liberação de memória*/

int f(char *data){
  void *s;
  s = malloc(50);
  int size = strlen(data);   
  if (size > 50)
  return(-1);
  free(s);
  return 0;
}
/* Essa função apresenta memory leak porque o "free" só ocorre se o tamanho do vetor for menor ou igual a 50,
visto que se for maior, a função retorna -1 e cancela seu funcionamento antes do free ser executado*/

int matriz(int **z, int nl, int nc, int i){
    z = malloc(nl*sizeof(int*));
    z[0] = malloc(nc*nl*sizeof(int));
    for(i=1; i<nl; i++)
        z[i] = z[i-1] + nc;
    free(z);   // Para não ocorrer memory leak, 
    free(z[0]);// essas linhas deveriam ser trocadas de lugar
}

/* Essa função apresenta memory leak porque o array auxiliar é liberado antes dos arrays das linhas da matriz. 
Uma vez que o endereço de Z é liberado, é impossível acessar os valores das linhas, pois elas dependem do endereço de Z para serem acessadas, ficando assim, perdidas na memória
*/


