#include <stdio.h>

/*
* Date due stringhe, scrivere una funzione che passi come parametri queste stringhe e le concateni.
* La concatenazione deve avvenire nella prima stringa, senza l'utilizzo di altre variabili di tipo array.
* La funzione dovrà sfruttare quanto visto con i puntatori per l'accesso in memoria (non usare S1[i]).
* Una volta fatto ciò, il programma deve stampare la stringa concatenata.
* 
* Per la consegna, utilizzare le seguenti stringhe:
* "laboratorio" e " programmazione"
* 
* Per la stampa usare:
* printf("Stringa concatenata: %s",S1);
*/

int len(char *S1){

		int str_len = 0;

		while( S1[str_len] != '\0'){
					str_len++;
		}

		//printf("%d\n", str_len);

		return str_len;
}

void concatena(char *S1, char *S2){
	
	int str_len =	len(S1);

	for (int i = 0; S2[i] != '\0';  i++) {

		S1[str_len] = S2[i];
		str_len++;
	}
	
}

int main (void) {

    char S1[50] = "laboratorio",
         S2[20] = " programmazione";

    //Inserite il vostro codice qua
		
		concatena(S1, S2);
    printf("Stringa concatenata: %s",S1);

    return 0;
}

