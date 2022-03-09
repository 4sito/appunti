#include <stdio.h>

int div(int x,int y) {

	int q = x / y;

	return q;
}

int resto(int x,int y) {

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

const double pi = 3.14;

//pi = 3;

return 0;
}
