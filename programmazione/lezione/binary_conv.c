#include <stdio.h>


// i want to create a program tha converts decimal to binary
// 2 == 10   --> 2 % 2 = 0,  1 % 2 = 1
// 8 = 1000  --> 8 % 2 = 0, 4 % 2 = 0, 2 % 2 = 0, 1 % 2 = 0



void inverti(int *bin, int size) {
		
	  int i = 0;
    int tmp[size]; // utilizza una variabile per lo scambio tra elementi
    for (size = size - 1; size >= 0 ; size--) { // scorre l'array scambiando gli elementi
        tmp[i] = bin[size];
  			i++;
    }

		for (i = 0; i < size; ++i) {
			*(bin+i) = tmp[i];
		}

}

void binary(int *bin, int x){
	
	int i = 0;

	while( x > 0){
	
	
	bin[i] = x % 2;
	x /= 2;
	
	printf("x = %d\n", x);
	
	i++;

	}
	
	int size = sizeof(bin) / sizeof(int);
	
	inverti(bin, size);

}


int main(){

	int x = 32;
	int bin[8];
	
	int size = sizeof(bin) / sizeof(int);

	binary(bin, x);
	
	for (int i = 0; i < size; ++i) {
		
		if(bin[i] == 1 || bin[i] == 0){
		printf("%d", bin[i]);
		}

	}

	return 0;
}
