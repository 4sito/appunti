#include <stdio.h>

/*
* Scrivete un programma che ordini un array di numeri interi in ordine
* crescente.
*
* Il programma deve stampare l'array ordinato al termine dell'esecuzione.
* Utilizzare: printf("Array[%d] : %d\n", i, array[i]);
*
* Per la consegna, utilizzare il seguente array:
* [3, 5, 7, 1, 2, 9, 4, 6, 0, 8]
*
* dopo 
* [0,1,2,3,4,5,6,7,8,9]
*
* usiamo due cicli for, uno per determinare il più piccolo valore, un altro per spostare i valori dell'array
*
*/

int main (void) {

	int array[10]={ 3, 5, 7, 1, 2, 10, 6, 6, 0, 8 };
  	
	int i, j, buf;

	for (i = 0; i < 10; ++i) {
		
			
		for (j = i + 1; j < 10; ++j) {
		
		if ( array[i] >	 array[j]){
		
		buf = array[i];
		array[i] = array[j];
		array[j] = buf;

		//printf("buf:%d\n", buf);
		//printf("Array[%d] >  %d\n", i, array[i]);
		//printf("Array[%d] >  %d\n", j, array[j]);
		}

		}

		//printf("Array[%d] >  %d\n", i, array[i]);

	}

	for(i = 0; i < 10; ++i){

		printf("\nArray[%d] >  %d\n", i, array[i]);

	}

}
