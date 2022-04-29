#include <stdio.h>

/* 
* Scrivere un programma che dato in input una stringa, verifichi con una funzione ricorsiva se è palindroma.
* Il programma deve poi stampare quanto trovato, utilizzare:
* if ( stringa_palindroma == 1)
*     printf("%s palindroma\n",S);
* else
*     printf("%s non palindroma\n",S);
*/

int palindroma(int i, int lunghezza, char *S){
    
  printf("%c  == %c\n", S[lunghezza-1], S[i]);
  if(S[i] != S[lunghezza-1]){
    return 0;
  }
  else{
      
      if(i > lunghezza){
        return 1;
      }

      i++;
      lunghezza--;

      palindroma(i, lunghezza, S);

  }
	//printf("%s %d\n", S, lunghezza);
}

int main(void) {
    const int length = 4;
    int len = length;
    //scanf("%d",&len);
    char S[length] = "cosa";
    //scanf("%s",S);
    	
    int i = 0;

		if ( palindroma(i, len, S) == 1)
        printf("%s palindroma\n", S);

    else
        printf("%s non palindroma\n", S);

    
    return 0;
}

