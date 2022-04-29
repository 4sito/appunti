#include <stdio.h>

int pot(int b, int exp, int *potenza){
	
	if( exp == 0 )
		return 1;
	
	else{
		
		exp--;
		*potenza = *potenza * b;
		printf("potenza: %d esponente: %d\n", *potenza, exp);
		
		return ( pot(b, exp, potenza) );
	
	}

}

int main(){

	int base = 5;
	int esponente = 12;
	int pote = 1;

	printf("base %d, esponente %d\n", base, esponente);
	pot(base, esponente, &pote);
	printf("%d\n", pote);
	return 0;
}
