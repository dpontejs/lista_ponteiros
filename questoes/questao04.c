#include <stdio.h>

int main() {
    int valor, *p1, idade, vetor[3], *p4, *p5;
    float temp, *p2;
    char aux, *nome = "Ponteiros", *p3;

    // (a)
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);

    // (b)
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%1.f \n", temp);

    // (c)
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);

    // (d)
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);

    // (e)
    p3 = nome;
    printf("%c \n", *p3);

    // (f)
    p3 = p3 + 4;
    printf("%c \n", *p3);

    // (g)
    p3--;
    printf("%c \n", *p3);

    // (h)
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    // (i)
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

    // (j)
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

    // (k)
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    // (l)
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    // (m)
    p5++;
    printf("%d \n", *p5);

    return 0;
}

/*
a) 20, pois o conteúdo de p1 que é a variável valor foi alterado
b) 29.0, pois o conteúdo de p2 que é a variável temp foi alterado
c) P, pois aponta para o primeiro elemento de "Ponteiros"
d) e, pois é o quarto elemento de "Ponteiros"
e) P, pois referencia o primeiro elementro
f) e, pois é o quarto elemento depois do primeiro
g) t, pois é o elemento logo atrás de "e"
h) 31, pois referencia o primeiro elemento
i) 45, pois é o elemento logo em seguida de 31
j) 27, pois é o elemento logo em seguida de 45
k) 31, pois é o elemento duas posicoes para trás
l) É o valor anterior ao endereco desreferenciado da terceira posicao, que é 45
m) 27, pois é o elemento logo em seguida de 45

*/