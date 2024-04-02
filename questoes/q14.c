// Ponteiros para funções são variáveis que armazenam um endereço que aponta para um código de uma função. Geralmente, o endereço guardado aponta para a primeira linha de código.
#include <stdlib.h>
#include <stdio.h>

void soma (int a, int b){ // Declara a função soma
    printf("Soma = %d", (a + b)); // print do resultado da soma
}

void subtracao (int a, int b){ // Declara a função subtração
    printf("Subtracao = %d", (a - b)); // print do resultado da subtração
}

int main(void){ // Declara a função main
    void (*pVetorOp[])(int, int) = {soma, subtracao}; // cria um ponteiro para função que aponta para as funções de soma e subtraçãi

    int opcao, x, y; // declara as variáveis

    printf("Digite o primeiro numero:"); // instruções para o usuário
    scanf("%d", &x); // lê o primeiro número
    printf("Digite o segundo numero:"); // instruções para o usuário
    scanf("%d", &y); // lê o segundo número
    printf("Digite 0 para soma e 1 para subtracao:"); // instruções para o usuário
    scanf("%d", &opcao); // Lê a opção que o usuário escolheu

    (*pVetorOp[opcao])(x,y); // retorna o conteudo do ponteiro na posição "opcao", ou seja, executa a função correspondente a posição "opção", com os parametros x e y

}
