#include <stdio.h>

/*
 * Scrivere una funzione ricorsiva che calcoli la 
 * lunghezza di una stringa. 
 * Scegliete voi il nome ed il prototipo della 
 * funzione. 
 * Nel main leggete da tastiera la stringa di cui
 * calcolar la lunghezza. 
 * Ad esempio se la stringa in input è "ciao", viene
 * stampato:
   4

 */

void lunghezza(char s[100], int *len){

  //printf("%d\n", lunghezza_s);
	if(s[*len] == '\0'){
		//printf("%d\n", *len);
		return;
		}

	else{
		*len += 1;
		lunghezza(s, len);
		}
	

}

int main(void) {

    char s[10] = "ciao"; //lunghezza massima stringa in input
    //scanf("%s", s);
    int lunghezza_s = 0;

    /* 
     * Inserite qua la chiamata alla vostra funzione 
     * che calcola la lunghezza della stringa salvando
     * il valore restituito in lunghezza_s. 
     */

		//printf("%d\n", *len);
		lunghezza(s, &lunghezza_s);
    //lunghezza_s = 
		printf("%d\n", lunghezza_s);

		return 0;
}
