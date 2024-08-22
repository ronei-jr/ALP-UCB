#include <stdio.h>

int main() {
	int a, b, c, x, y;
	printf("Responda apenas com S ou N\n\nTenho compromisso esse dia?");
	scanf("%c", &a);
	
switch(a){
	case 'S': printf("Nao vou!");
	break;
	case 'N': printf("Vou estar na cidade?");
	scanf("%c", &b);
	break;
}	
scanf("%c", &b);
switch(b){
	case 'S': printf("Tenho dinheiro?");
	scanf("%c", &c);
	break;
	case 'N': printf("Nao vou!");
	break;
}
scanf("%c", &c);
switch(c){
	case 'S': printf("Esta chovendo?");
	scanf("%c", &x);
	break;
	case 'N': printf("E perto?");
	scanf("%c", &y);
	break;
}
scanf("%c");
switch(x){
	case 'S': printf("Nao vou!");
	break;
	case 'N': printf("Eu vou!");
	break;
}
scanf("%c", &y);
switch(y){
	case 'S': printf("Eu vou!");
	break;
	case 'N': printf("Nao vou!");
	break;
}

return 0;
}
