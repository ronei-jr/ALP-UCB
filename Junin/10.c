#include <stdio.h>

int main() {
    char nome[50];
    float altura_cm, altura_m, peso;
    char sexo;

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a altura (em centímetros): ");
    scanf("%f", &altura_cm);

    altura_m = altura_cm / 100.0;

    while ((getchar()) != '\n');

    printf("Digite o sexo (M ou F): ");
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura_m) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura_m) - 44.7;
    } else {
        printf("Sexo inválido.\n");
        return 1;
    }

    printf("Peso ideal para %s: %.2f kg\n", nome, peso);

    return 0;
}
