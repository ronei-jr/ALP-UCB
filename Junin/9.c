#include <stdio.h>

int main() {
    float horas, valorHora, total;
    float horasExtras = 0.0;
    float valorExtra = 0.0;
    const int maxHoras = 40;
    const int numSemanas = 4;
    float horasMes = maxHoras * numSemanas;

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horas);

    printf("Digite o salário por hora: R$ ");
    scanf("%f", &valorHora);

    if (horas > horasMes) {
        horasExtras = horas - horasMes;
        valorExtra = horasExtras * valorHora * 1.5;
    }

    total = (horasMes * valorHora) + valorExtra;

    printf("Salário total do funcionário: R$ %.2f\n", total);

    return 0;
}
