#include <stdio.h>

int main() {
	int a, b, c;
	printf("Digite os valores de a, b e c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b) printf("a e b sao iguais\n");
	if (b != c) printf("b e c sao diferentes\n");
	if (a > b) printf("a maior que b\n");
	if (b >= c) printf ("b maior ou igual a c\n");
	if (a < b) printf ("a menor que b\n");
	if (b <= c) printf ("b menor ou igual a c\n");
	
	if ((a == b) && (a == c)) printf("todos sao iguais\n");
	if ((a == b) || (a == c)) printf("o valor de a se repete\n");
	if (!(b == c)) printf("b e c sao diferentes\n");
	
return 0;
}
