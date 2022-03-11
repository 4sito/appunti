#include <stdio.h>

/*
 *
 * definiamo una funzione che dati due numeri in input
 * resituisca come output il primo numero elevato per il secondo
 *
 */

int potenza(int base, int esponente) {

	int pot = 1;
	
	while (esponente > 0){

	pot = pot * base; // moltiplichiamo il valore della base per sè stessa 
										// tante volte in base al valore dell'esponente
	
	esponente--;
	}

	return pot;
}

int main (void) {

	int base, esp;

	scanf("%d %d", &base, &esp);

	printf("%d\n", potenza(base, esp));

	return 0;

}
