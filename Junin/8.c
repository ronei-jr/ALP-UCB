#include <stdio.h>

int main() {
    int inicio, fim, duracao;

    scanf("%d", &inicio);
    scanf("%d", &fim);

    if (fim >= inicio) {
        duracao = fim - inicio;
    } else {
        duracao = (24 - inicio) + fim;
    }

    printf("A duracao do jogo foi de %d horas.\n", duracao);

    return 0;
}
