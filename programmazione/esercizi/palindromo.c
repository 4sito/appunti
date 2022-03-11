#include<stdio.h>
#include <stdbool.h>
/*
 * Dato un array di interi di lunghezza N, scriveru un programma che stampa
 * "L'array è palindromo" se l'array è palindromo o "L'array non è palindromo" se non lo è.
 * Un array è definito palindromo se invertendolo rimane uguale (es. [1, 2, 3, 2, 1] è palindromo)
 * ATTENZIONE: l'input non è più fisso, la dimensione N e i valori dell'array saranno forniti come input. 
*/

bool is_even(int size){

	if ( size % 2 == 0){
	return false; //as the value of array starts from 0 an array as arr[4] is not 
								// even as it has 5 elements
	}
	else { return true;	}

}


bool palindromo(int array[], int lunghezza){
	
	int i, j = lunghezza;
	bool valore;
	int half_array_len = lunghezza + 1 / 2

		printf("%d\n", half_array_len);

  if (is_even(lunghezza) == true) { // se l'array è pari basta controllare che le
												 // prima metà e la seconda metà (invertita) siano uguali
	for (i = 0; i < half_array_len; ++i) {
		
	if( array[i] == array[j]){
	
		valore = true;

	}
	else{
		valore = false;
		return valore;}

	j--;
	}

	}
	printf("Pari? %d\n", is_even(lunghezza));
return 0;
}
int main(){

    //int N = 5;
    //leggere da input grandezza array
    // scanf("%d", &N);

    int array[] = {1, 2, 2, 1};
		int size = sizeof array / sizeof array[1] - 1;

    printf("size: %d\n", size); 
    //leggere da input dati array
    //for(int i = 0; i < N; i++){
    //    scanf("%d", array+i);
    //}
		
    //inserite il vostro codice qui
		printf("Palindromo: %d \n", palindromo(array, size));		

    return 0;
}
