#include <stdio.h>

/*
 * Numero perfetto = la somma di tutti i suoi divisori
 * eccetto se stesso è uguale a se stesso;
 *
 * Divisore = b divisore di a se a = b * c > a/b = c
 *
 * Divisori di 10 = { 1, 2, 5 } 
 */

int get_divisori(int n){


	int i, sum = 0;

	for (i = 1; i < n; ++i) {

		if ( n % i == 0){
	 	sum = sum+i;
			if (sum == n){
					//printf("%d è perfetto\n", n);
					return sum;
			}

   	//printf("%d è divisore di %d\n",i, n);
		}

		}

return 0;
}


int main(){

	int lim_sup = 100000, lim_inf=4;
	int i = lim_inf;

	for (; i < lim_sup; ++i) {
	
		if (get_divisori(i) != 0){
			
			printf("%d è perfetto\n", get_divisori(i));
			
		}
	}

return 0;
}
