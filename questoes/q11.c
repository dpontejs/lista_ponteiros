#include <stdlib.h>
#include <stdio.h>



int main(void){
    int *px;
    float *py;
    char *pz;
    double *pw;
    int a;
    float b;
    char c;
    double d;
    a = 5;
    b = 3;
    c = 7;
    d = 8;

    px = &a;
    py = &b;
    pz = &c;
    pw = &d;

    printf("Endereços do INT\n");
    printf("O endereco de px eh %p \n", px);
    printf("O endereco de px + 1 eh %p \n", (px + 1));
    printf("O endereco de px + 2 eh %p \n", (px + 2));
    printf("O endereco de px + 3 eh %p \n", (px + 3));

    printf("Enderecos do Float\n");
    printf("O endereco de py eh %p \n", py);
    printf("O endereco de py + 1 eh %p \n", (py + 1));
    printf("O endereco de py + 2 eh %p \n", (py + 2));
    printf("O endereco de py + 3 eh %p \n", (py + 3));

    printf("Enderecos do Char\n");
    printf("O endereco de pz eh %p \n", pz);
    printf("O endereco de pz + 1 eh %p \n", (pz + 1));
    printf("O endereco de pz + 2 eh %p \n", (pz + 2));
    printf("O endereco de pz + 3 eh %p \n", (pz + 3));

    printf("Enderecos do Double\n");
    printf("O endereco de pw eh %p \n", pw);
    printf("O endereco de pw + 1 eh %p \n", (pw + 1));
    printf("O endereco de pw + 2 eh %p \n", (pw + 2));
    printf("O endereco de pw + 3 eh %p \n", (pw + 3));



    return 0;
}


/*
1 - X declarado como char
    a) x+1 = 4093
    b) x+2 = 4094
    c) x+3 = 4095
    d) x+4 = 4096

2 - X declarado como int
    a) x+1 = 4094
    b) x+2 = 4096
    c) x+3 = 4098
    d) x+4 = 4100

3 - X declarado como float
    a) x+1 = 4096
    b) x+2 = 4100
    c) x+3 = 4104
    d) x+4 = 4108

4 - X declarado como double
    a) x+1 = 4100
    b) x+2 = 4108
    c) x+3 = 4112
    d) x+4 = 4120

No entanto, a arquitetura do sistema utilizado define por padrão que o tipo int ocupa 4 bytes, o tipo char 1 byte, float 4 bytes e double 8 bytes.
Assim, o programa saltará 4 bytes em vez de 2, quando a variável for ponteiro para int, devido a sua arquitetura.
*/ 
