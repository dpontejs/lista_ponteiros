#include <stdio.h>
#include <string.h>

struct teste{
  int x;
  char nome[4];
};

int main() {
    struct teste *s;
    struct teste jose = {3, "jose"};
    s = &jose;

    printf("%d\n", s->x);
    printf("%s\n", s->nome);

    return 0;
}