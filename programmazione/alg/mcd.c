#include <stdio.h>	


int mcd(int x, int y){

int mcd = 0;
int i = 0;

 if (x == 0) {
	if (y==0) {
		printf("I due numeri devono essere entrambi non nulli\n");
		mcd = 0;
		return mcd;
	}

	    mcd = y;
	    return mcd;
	    }

 else if (y == 0) {
	 mcd = x;
	 return mcd;
 }

else { 

	int r = x%y;
        int q = x/y;

printf("Passaggio %d: x:%d y:%d \n", i,x,y);
 
if (r == 0) {

	 mcd = q;    

 }


 else while (r != 0) {
 	 
	++i;

	 x = y;
	 y = r;

	 printf("Passaggio %d: x:%d y:%d \n", i,x,y);

	 r = x%y;
	 q = x/y;
	 
	 printf("quoziente: %d, resto: %d \n", q,r);
	 mcd=y;
}

}

return mcd;
}

int main() {

/* I want to build a program that can calculate the MCD 
 * through Euler's algorithm
 */
int x;
int y;

printf("I due numeri di cui calcolare il massimo comune divisore:\n");

scanf("%d %d", &x, &y);
//printf("resto: %d \nquoziente: %d \n", resto(x,y), div(x,y));

//printf("%d = %d x %d + %d\n", x, y, div(x,y), resto(x,y));

printf("L'MCD e' %d \n", mcd(x,y));

return 0;
}
