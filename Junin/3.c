#include <stdio.h>

int main (){
    float x;

    scanf("%f",&x);

    if (x>=12)
    {
        printf("Custo total: R$%.2f", x);
    } else
    {
        float total = x * 1.30;
        printf("Custo total: R$%.2f", total);
    }
    
    


    return 0;
}