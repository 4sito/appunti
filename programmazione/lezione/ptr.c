#include <stdio.h>


int main(){

	short int x = 11;
	int y = y | SET_ON;

	short int *x_ptr = &x;
	
	printf("valore di x dal puntatore: %d\nvalore del puntatore: %p\n", 
			*x_ptr, x_ptr ); 

	printf("valore di x  + 1 dal puntatore: %d\nvalore del puntatore + 1: %p\n", 
			*x_ptr+1, x_ptr+1 ); 
	
	printf("y = %d\n", y);

	return 0;
}
