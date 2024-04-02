#include <stdio.h>

int main() {
    int pulo[5] = {1, 2, 3, 4, 5};

    printf("%d\n", *(pulo + 2));
    printf("%d\n", *(pulo + 4));
    printf("%p\n", pulo + 4);
    printf("%p\n", pulo + 2);

    /*
    a) retorna o seu valor
    b) nao referencia
    c) nao referencia
    d) retorna o seu endereco
    */

   return 0;
}