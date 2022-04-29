#include <stdio.h>

/*
* Scrivete un programma che calcoli la trasposta di una matrice generica.
*
* L'operazione consiste nello scambiare le righe con le colonne.
*
* Esempio:
* |a b c| ____ |a d|
* |d e f|      |b e|
*              |c f|
*
* Per la consegna, utilizzare:
* matrice = [[1,2],[3,4],[5,6]]
*
* Utilizzare il seguente codice per stampare il risultato:
* for (int i = 0; i < colonne; i += 1){
*   for (int j = 0; j < righe; j += 1){
*       printf("%d ", matRisultato[i][j]); 
*   }
*   printf("\n");
* }
* 
*/

#define ROWS 3
#define COLS 2

int main () {

int matrice[ROWS][COLS] = { {1,2} , {3,4} , {5,6}} ;

int matRisultato[COLS][ROWS];


for (int i = 0; i < COLS; i++){
    for (int j = 0; j < ROWS; j++)
    {
        matRisultato[i][j] = matrice[j][i];
        printf("%d ", matRisultato[i][j]);

    }
    
    printf("\n");


}

return 0;
}