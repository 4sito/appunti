#include <stdio.h>


int main(){

const int SOGLIA = 63;

	/* non deve essere divisibile per 2,3,5 */

int i = SOGLIA + 1;

while( ( i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0)){
        printf("i = %d, >>> %d, %d, %d\n", i, i%2, i%3, i%4);
	i = i + 1;
}

printf("i = %d, >>> %d, %d, %d\n", i, i%2, i%3, i%4);

}
