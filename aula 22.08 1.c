#include <stdio.h>

int main() {
	float a, b;
	char oper;
	
	printf("Digite a operecao: ");
	scanf ("%f %c %f", &a, &oper, &b);

switch(oper) {
	case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	case '-': printf("%.2f - %.2f = %.2f\n", a, b, a + b);
	case '*': printf("%.2f * %.2f = %.2f\n", a, b, a + b);
	case '/': printf("%.2f / %.2f = %.2f\n", a, b, a + b);
}

return 0;
}

