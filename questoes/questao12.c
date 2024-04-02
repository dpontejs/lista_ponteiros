#include <stdio.h>
#include <string.h>

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value; // válido
scanf("%f", &aloha); // inválido, pois para inserir dados num array, não é possível utilizar apenas 1 scanF, devendo ser utilizado um for para cada posição do array
aloha = "value"; // inválido, pois aloha é um array do tipo float, e não pode receber uma string
printf("%f", aloha); // válido
coisas[4][4] = aloha[3]; // válido
coisas[5] = aloha; // inválido, pois não se pode atribuir um vetor de 10 linhas a uma linha com apenas 5 elementos (???)
pf = value; //inválido, pois a variável pf é um ponteiro para float, e deve receber um endereço de float
pf = aloha; //inválido, pois a variável pf é um ponteiro para float, e deve receber um endereço de float
