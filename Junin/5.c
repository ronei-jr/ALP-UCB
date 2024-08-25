#include <stdio.h>
#include <time.h>

int main() {
    time_t tempo_atual;
    time(&tempo_atual);
    struct tm *data_atual = localtime(&tempo_atual);
    int nascimento, ano_hoje = data_atual->tm_year + 1900;

    scanf("%d",&nascimento);
    
    printf("O ano atual e: %d\n", ano_hoje);
    if (ano_hoje-nascimento>=18)
    {
        printf("Seu voto eh obrigatorio!\n");
    }
    else if (ano_hoje-nascimento>=16)
    {
        printf("Pode votar, mas nao eh obrigatorio!\n");
    } else
    {
        printf("Nao pode votar!\n");
    }
    return 0;
}