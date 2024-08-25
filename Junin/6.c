#include <stdio.h>

    int main (){

    int a,b;

    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            printf("%d eh maior que %d\n", a,b);
            break;
        }
        else if (b>a)
        {
            printf("%d eh maior que %d\n", b,a);
            break;
        } else
        {
            printf("Digite dois valores validos!\n");
        }

    }
    


    return 0;
    }