#include <stdio.h>

int main() {
    int const *x;
    int const i = 3;

    x = &i;

    /*  printf("%d", ++(*x));
    O valor de *x não pode ser incrementado por ser constante, gerando um erro
    */

    return 0;
}