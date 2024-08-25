#include <stdio.h>

int main() {
    float salarioFixo, vendas, salarioTotal;
    float comissao;

    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor total das vendas efetuadas: R$ ");
    scanf("%f", &vendas);

    if (vendas <= 1500) {
        comissao = vendas * 0.03;
    } else {
        comissao = (1500 * 0.03) + ((vendas - 1500) * 0.05);
    }

    salarioTotal = salarioFixo + comissao;
    printf("Salário total do vendedor: R$ %.2f\n", salarioTotal);

    return 0;
}
