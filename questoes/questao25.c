#include <stdio.h>
#include <stdlib.h>

int ***alocarMatriz(int altura, int largura, int profundidade) {
    int ***matriz;
    int i;

    matriz = (int ***)malloc(altura * sizeof(int **));
    
    matriz[0] = (int **)malloc(altura * largura * sizeof(int *));

    matriz[0][0] = (int *)malloc(altura * largura * profundidade * sizeof(int));

    for (i = 1; i < altura; i++) {
        matriz[i] = matriz[i - 1] + largura;
    }

    for (i = 1; i < altura * largura; i++) {
        matriz[0][i] = matriz[0][i - 1] + profundidade;
    }

    return matriz;
}

void liberarMatriz(int ***matriz) {
    free(matriz[0][0]);

    free(matriz[0]);
    
    free(matriz);
}

void imprimirPlano(int ***matriz, int altura, int largura, int profundidade, int plano) {
    int i, j;

    if (plano < 0 || plano >= profundidade) {
        printf("Plano inválido\n");
        return;
    }

    for (i = 0; i < altura; i++) {
        for (j = 0; j < largura; j++) {
            printf("%d ", matriz[i][j][plano]);
        }
        printf("\n");
    }
}

void modificarElemento(int ***matriz, int altura, int largura, int profundidade, int x, int y, int z, int valor) {
    if (x < 0 || x >= altura || y < 0 || y >= largura || z < 0 || z >= profundidade) {
        printf("Coordenadas inválidas\n");
        return;
    }

    matriz[x][y][z] = valor;
}

int main() {
    int altura, largura, profundidade;
    int ***matriz;
    int opcao, plano, x, y, z, valor;

    printf("Digite as dimensões da matriz tridimensional:\n");
    scanf("%d %d %d", &altura, &largura, &profundidade);

    matriz = alocarMatriz(altura, largura, profundidade);

    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Imprimir um plano da matriz\n");
        printf("2. Modificar o estado de um elemento da matriz\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o número do plano (entre 0 e %d): ", profundidade - 1);
                scanf("%d", &plano);
                imprimirPlano(matriz, altura, largura, profundidade, plano);
                break;
            case 2:
                printf("Digite as coordenadas (x y z) do elemento a ser modificado: ");
                scanf("%d %d %d", &x, &y, &z);
                printf("Digite o novo valor (0 ou 1): ");
                scanf("%d", &valor);
                modificarElemento(matriz, altura, largura, profundidade, x, y, z, valor);
                break;
            case 3:
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 3);



    liberarMatriz(matriz);
    
    return 0;
}