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