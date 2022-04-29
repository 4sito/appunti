#include <stdio.h>
/*
 * Scrivere una funzione che, dato un array di stringhe,
 * restituisca la stringa di lunghezza massima. 
 * Nel main si dovrà stampare tale stringa.
 * Inoltre, si tratti in modo appropriato il caso in cui
 * il numero di stringhe nell'array sia zero. In particolare,
 * nel main si stampi "array vuoto\n". Se il numero di 
 * stringhe è maggiore di zero, utilizzare il seguente comando
 * nel main per la stampa della stringa più lunga:
 * 
 * printf("%s\n", stringa_lung_max(stringhe, num_stringhe));
 * 
 * Il numero di stringhe e le stringhe stesse sono lette da 
 * tastiera. 
 * 
 */

char *stringa_lunga_max(int num, char strings[][256]){

char *string_max = strings[0];
int i, length, temp;

length = printf("%s\n", strings[0]);

for (i = 1; i < num; ++i) {
    
    temp = printf("%s\n", strings[i]); 

    if (length < temp) {
        length = temp;
        string_max = strings[i];

    }


    }
    
printf("%d\n", length-1);
printf("L STRING: %s\n", string_max);
return string_max;

}

int main(void) {

    int num_stringhe;
    scanf("%d", &num_stringhe);

    char stringhe[num_stringhe][256];
    for(int i=0; i<num_stringhe;i+=1) {
        fflush(stdin);
        scanf("%s", stringhe[i]);
    }
    

     char *s_max = stringa_lunga_max(num_stringhe, stringhe);
     printf("STRING:%s\n", (s_max==NULL)?"array vuoto": s_max);


}
