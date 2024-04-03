#include <stdio.h>

int main() {
    int mat[4], *p, x;

    p = mat + 1;
    printf("%p\n", p);
    p = mat;
    printf("%p\n", p);
    p = mat;
    printf("%p\n", p);
    x = (*mat);
    printf("%d\n", x);

    return 0;
}

/* 
Todas, pois mat + 1 quer dizer que p vai referenciar a 
segunda posicão do vetor mat, e p = mat ele irá referenciar a primeira
e x = (*mat) irá retornar um inteiro que é aceito em x
*/