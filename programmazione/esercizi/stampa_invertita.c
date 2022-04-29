#include <stdio.h>

void stampa_inv(int len, char S[]){

printf("%c", S[len-1]);

len--;

if( len == 0	)
	return;

stampa_inv(len, S);
}

int main(){

	char S[] = "Ciao";
	
	

	int size = sizeof(S) / sizeof(char);

	printf("%d %s\n", size, S);
	

	stampa_inv(size, S);
	return 0;
}
