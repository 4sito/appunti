#include <stdio.h>	


int main(){
	
	int b, x = 1111111111;

	for (b = 0; x != 0; x >>=1) {

		if ( x & 01){
			b++;
			printf("x = %d, b = %d\n", x, b);
		}
	}
	
	printf("b = %d \n", b);

	return 0;
}
