#include <stdio.h>	


int max(int x[], int size){

	int max_value, index = 0;

	max_value = x[0];

	for (int i = 0; i < size; ++i) {

		if ( x[i] > max_value){
			
				max_value = x[i];
				index = i;
		}
		
	}

return index;
}


int min(int x[], int size){

	int min_value, index = 0;

	min_value = x[0]; // partiamo imponendo che il valore minimo è il primo
									 // poi con un ciclo verifichiamo che questo sia
									 // maggiore o minore rispetto all'altro, e se 
									 // questo secondo è minore esso sarà il nuovo valore
									 // di minimo.


	for (int i = 1; i < size; ++i) {

		if (x[i] < min_value){

		min_value = x[i];
		index = i;
	
		}

	}

return index;
}


int main(void) {
	
	int arr[] = { 13, 5, 1, 7, 10, 9, 4, 6, 2, 8 };
	
	
	int size = sizeof arr / sizeof arr[0]; // definiamo la grandezza dell'array 
	


printf("Valore minimo: array[%d] -> %d\n", min(arr, size), arr[min(arr, size)] );

printf("Valore massimo: array[%d] -> %d\n", max(arr, size), arr[max(arr, size)] );

	return 0;

}
