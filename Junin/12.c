#include <stdio.h>

int main() {
    int numeroConta;
    float saldo, debito, credito, saldoAtual;

    printf("Digite o número da conta do cliente: ");
    scanf("%d", &numeroConta);
    printf("Digite o saldo da conta: R$ ");
    scanf("%f", &saldo);
    printf("Digite o valor do débito: R$ ");
    scanf("%f", &debito);
    printf("Digite o valor do crédito: R$ ");
    scanf("%f", &credito);


    saldoAtual = saldo - debito + credito;
    printf("Saldo atual da conta %d: R$ %.2f\n", numeroConta, saldoAtual);

    if (saldoAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
