#include <stdio.h>

int main() {
    int i=5, *p;
    p = &i;

    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
    /* 
    a) será impresso o endereco de i
    b) será impresso o endereco logo após o de i
    c) vai ser o valor de i + 2 = 7
    d) vai ser o valor de i
    e) vai ser 3*5, que é o valor de i
    f) vai ser o valor de i + 4 = 9
    */

   return 0;
}