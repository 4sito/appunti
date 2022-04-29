#include <stdio.h>


void cambio(int *ptr){

*ptr = *ptr + 1;
printf("Value of pointer %d\n", *ptr);

}

int main(){

	int x = 10;
	int *ptr = &x;

	printf("Valore di x = %d\n", x);
	
	//*ptr = x+1;
	cambio(ptr);
	
	printf("Valore di x = %d\n", x);

return 0;
}
