#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    int x;

    scanf("%d", &x);
    if (x>10)
    {
        printf("%d É MAIOR QUE 10!\n", x);
    } else
    {
        printf("%d NÃO É MAIOR QUE 10!\n",x);
    }
    
    

    return 0;
}