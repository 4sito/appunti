#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int len(char* N){

    int str_len = 0;

    while( N[str_len] != '\0'){
          str_len++;
    }

    printf("%d\n", str_len);

    return str_len;

}

bool check_match(char *N, char *T, int N_len, int T_len){

	int i,j;
	char temp[T_len - 1];

	for (i = 0; i < N_len; ++i) {
	 for (j = 0; j < T_len; j++) {
	 	 
		 temp[j] = *(N+i+j);
		 //printf("%c", *(N+i+j) );

		 //if( j == T_len - 1){
		 //printf(" == %s\n", T);
		 //}
		 

	 }

	 printf("%s == %s \n", temp, T);
	 
	 for (j = 0; j < T_len; j++) {
	 	
		 if( (strcmp(temp, T)) ){
				return true;	
			} 
	 }	
	 //printf("\n");
	}

return false;
}

int main(){

    /* Nota:
     * 256 è la dimensione massima della stringa ma il numero di caratteri può essere inferiore
     * implementare una funzione len per misurare la lunghezza di una stringa
     * (contare quanti caratteri ci sono prima del delimiter "\0")
    char N[256];
    char T[256];

    scanf("%255s", N);
    scanf("%255s", T);
		*/

		char N[256] = "programmazione2022",
				 T[256] = "gramm";

    int N_len =len(N), T_len =len(T);
		
		if(check_match(N, T, N_len, T_len) == 1){
			printf("Match\n");
			}

		else{
		printf("No match\n");
		}


    //inserire codice qui
}
