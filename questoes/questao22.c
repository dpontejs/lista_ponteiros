#include <stdio.h>
int main(){
    int a, b;
    int x, y, z;
    scanf("%d %d", &a, &b);
    x = a; y = b; z = a + b;
    while (a) {
        x = x | b;
        y = y ^ a;
        z = z & (a+b);
        a = a >> 1;
        b = b << 1;
    }
    printf ("%d %d %d\n", x, y, z);
    return 0;
}


/*Primeira iteração do while: entradas 10 e 1
    O while só irá parar quando a for igual a 0

    x = 10 | 1              x = 10, y = 1, z = 11, a = 10, b = 1
        00001010
        00000001
        00001011 - resultado = 11
    y = 1 ^ 10              x = 11, y = 1, z = 11, a = 10, b = 1
        00000001
        00001010
        00001011 - resultado = 11
    z = 11 & (10 + 1)       x = 11, y = 11, z = 11, a = 10, b = 1
        00001011
        00001011
        00001011 - resultado = 11
    a = 10>>1                x = 11, y = 11, z = 11, a = 10, b = 1
        00001010
        00000101 - resultado = 5
    b = 1 << 1              x = 11, y = 11, z = 11, a = 5, b = 1
        00000001
        00000010 - resultado = 2
FINAL 1º WHILE: x = 11, y = 11, z = 11, a = 5, b = 2

A condição de while depende exclusivamente da variavel a, e a única expressão que altera o valor de a dentro do while é "a>>1", que nada mais é que dividir a variavel a por 2.
Assim, podemos inferir que o while terá 4 iteracoes, pois o a irá de 10 para 5 para 2 para 1 e finalmente para 0, somando 4 iterações

Segunda iteração do while: 
    Estado inicial: x = 11, y = 11, z = 11, a = 5, b = 2

    x = 11 | 2              x = 11, y = 11, z = 11, a = 5, b = 2
        00001011
        00000010
        00001011 - resultado = 11
    y = 11 ^ 5              x = 11, y = 11, z = 11, a = 5, b = 2
        00001011
        00000101
        00001110 - resultado = 14
    z = 11 & (5 + 2)       x = 11, y = 14, z = 11, a = 5, b = 2
        00001011
        00000111
        00000011 - resultado = 3
    a = 5>>1               x = 11, y = 14, z = 3, a = 5, b = 2
        5/2 = 2  - resultado = 2
    b = 2 << 1             x = 11, y = 14, z = 3, a = 2, b = 2 
        2 x 2 = 4 - resultado = 4
FINAL 2º WHILE: x = 11, y = 14, z = 3, a = 2, b = 4 

Terceira iteração do while:
    Estado inicial: x = 11, y = 14, z = 3, a = 2, b = 4 

    x = 11 | 4              x = 11, y = 14, z = 3, a = 2, b = 4 
        00001011
        00000100
        00001111 - resultado = 15
    y = 14 ^ 2              x = 15, y = 14, z = 3, a = 2, b = 4 
        00001110
        00000010
        00001100 - resultado = 12
    z = 3 & (2 + 4)        x = 15, y = 12, z = 3, a = 2, b = 4
        00000011
        00000110
        00000010 - resultado = 2
    a = 2>>1               x = 15, y = 12, z = 2, a = 2, b = 4
        2/2 = 1  - resultado = 1
    b = 4 << 1             x = 15, y = 12, z = 2, a = 1, b = 4
        4 x 2 = 8 - resultado = 8
FINAL 3º WHILE: x = 15, y = 12, z = 2, a = 1, b = 8

Quarta(e ultima) iteração do while:
    Estado inicial: x = 15, y = 12, z = 2, a = 1, b = 8
    
    x = 15 | 8              x = 15, y = 12, z = 2, a = 1, b = 8
        00001111
        00001000
        00001111 - resultado = 15
    y = 12 ^ 1              x = 15, y = 12, z = 2, a = 1, b = 8
        00001100
        00000001
        00001101 - resultado = 13
    z = 2 & (1 + 8)         x = 15, y = 13, z = 2, a = 1, b = 8
        00000010
        00001001
        00000000 - resultado = 0
    a = 1>>1                x = 15, y = 13, z = 0, a = 1, b = 8
        1/2 = 0  - resultado = 0
    b = 8 << 1             x = 15, y = 13, z = 0, a = 0, b = 8
        8 x 2 = '6' - resultado = 16

FINAL 4º WHILE: x = 15, y = 13, z = 0, a = 0, b = 16

Como "a" chegou a 0, o bloco de comandos do while será pulado e o print será executado. Como X, Y e Z valem, nesse momento, 15, 13 e 0, respectivamente, essa será a saída do programa
*/ 
