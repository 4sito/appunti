#include <stdio.h>

int div(x,y) {

	int q = x / y;

	return q;
}

int resto(x,y) {

	int r = x % y;

	return r;
}

int main() {

	int x;

	int y;

printf("I due numeri da dividere ed eventualmente calcolare il resto\n");

scanf("%d %d", &x, &y);

printf("%d = %d x %d + %d \n", x, y, div(x,y), resto(x,y));

printf("quoziente: %d; resto: %d \n", div(x,y), resto(x,y));


return 0;
}
