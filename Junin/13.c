#include <stdio.h>

int main() {
    int qtdAtual, qtdMax, qtdMin;
    float qtdMedia;

    printf("Quantidade atual em estoque: ");
    scanf("%d", &qtdAtual);

    printf("Quantidade maxima em estoque: ");
    scanf("%d", &qtdMax);

    printf("Quantidade minima em estoque: ");
    scanf("%d", &qtdMin);

    qtdMedia = (qtdMax + qtdMin) / 2.0;

    if (qtdAtual >= qtdMedia) {
        printf("Nao efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

    return 0;
}
