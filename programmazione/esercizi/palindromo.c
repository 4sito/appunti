#include<stdio.h>
#include <stdbool.h>
/*
 * Dato un array di interi di lunghezza N, scriveru un programma che stampa
 * "L'array è palindromo" se l'array è palindromo o "L'array non è palindromo" se non lo è.
 * Un array è definito palindromo se invertendolo rimane uguale (es. [1, 2, 3, 2, 1] è palindromo)
 * ATTENZIONE: l'input non è più fisso, la dimensione N e i valori dell'array saranno forniti come input. 
*/

bool palindromo(int array[], int len){
	
	int i, j = len - 1 ; // mettiamo che j è len - 1
	bool valore;

	for (i = 0; i < len ; ++i) {
		
		// printf("array[%d] > %d ; array[%d] > %d\n", i, array[i], j, array[j]);
		
		// stiamo scorrendo da destra a sinistra con array[i]
		// e lo scorriamo da sinistra a destra con array[j],
		// ad ogni ciclo del for controlliamo che i due valori siano uguali, se non lo sono la funzione ritorna il valore
		// di falso e termina il programma

		if ( array[i] == array[j]){
			
				valore = true;

		}
		
		else{ 

			valore = false;
			return valore;

			}

	j--;
	
	}

return valore;
}



int main(void){

    int N = 5;
    //leggere da input grandezza array
    scanf("%d", &N);

    int array[N];

    //printf("size: %d\n", size); 
    //leggere da input dati array
    
		for(int i = 0; i < N; i++){
        scanf("%d", array+i);
    }
		
		int size = sizeof array / sizeof array[1];

    //inserite il vostro codice qui
		if ( palindromo(array, size) == true){
			
		printf("L'array è un palindromo\n");

		}
		
		else {
		printf("l'array NON è un palindromo\n");

		}
}
