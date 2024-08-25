#include <stdio.h>

    int main (){

    int a,b;

    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            printf("%d %d\n", b,a);
            break;
        }
        else if (b>a)
        {
            printf("%d %d\n", a,b);
            break;
        } else
        {
            printf("Digite dois valores validos!\n");
        }

    }
    


    return 0;
    }