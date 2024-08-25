#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    scanf("%d",&x);
    if (x>=0)
    {
        printf("%d é positivo!\n",x);
    } else
    {
        printf("%d é negativo!",x);
    }
    
    

    return 0;
}