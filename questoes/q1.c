#include <stdio.h>

int main() {
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("%d\n", p == &i); // o ponteiro P aponta para o endereco de memória de i que é &i
    printf("%d\n", *p - *q); // o operador * desrreferencia o ponteiro e retorna o valor em que ele aponta, que nesse caso *p = 3 e *q = 5
    printf("%d\n", **&p); // o operador & retorna o endereco de p que é desrreferenciado logo em seguida retornando o próprio p, que depois é desrreferenciado novamente retornando 3
    printf("%d\n", 3 - *p/(*q) + 7); // a operacão matemática ocorre com o mesmo principio do item b, a divisão é 3/5

    return 0;
}