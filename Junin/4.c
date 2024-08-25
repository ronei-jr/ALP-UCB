#include <stdio.h>

int main (){

    float nota1,nota2,media;

    scanf("%f %f", &nota1, &nota2);
    media = (nota1+nota2)/2;
    if (media>=7)
    {
        printf("Aprovado! Media do aluno: %.1f\n", media);
    } else
    {
        printf("Reprovado! Media do aluno: %.1f\n", media);
    }
    
    

    return 0;
}