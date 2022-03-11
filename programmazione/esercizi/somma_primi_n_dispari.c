#include <stdio.h>

/*
 * Dobbiamo definire una funzione sommaDispariN che riceva un intero 
 * come input e che ritorni come output la somma di tutti i numeri dispari
 * fino ad n incluso. 
 *
 * Possiamo definire quindi una funzione che ci dica quando un numero è dispari
 * o no
 *
 *
 */ 

int dispari(int n){

	if (n%2 == 0){
			return 0;
	}
	else 
			return n;

}

int sommaDispariN(int n){
	int sum = 0;
	int i;

	for (i = 0; i <= n; ++i) {
	
		// la funzione chiamata restituisce 0 se
		// il numero è pari altrimenti restituisce il numero
		
		sum = sum + dispari(i);	// ad ogni ciclo sommiamo n
	}

	return sum;
}


 int  main (void) {

		int n;
		// ricevi un input
		scanf("%d", &n);

		printf("Somma dei numeri dispari minori di n: %d\n", sommaDispariN(n));

		return 0;

 }

