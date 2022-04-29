#include <stdio.h>


int main(){
	
	FILE *in_file  = fopen("input.txt", "r");

	int N;
	fscanf(in_file, "%d", &N);
	
	if(N % 2 == 0){
		printf("pari\n");
	}	
	else 
		printf("dispari\n");

	return 0;
}
