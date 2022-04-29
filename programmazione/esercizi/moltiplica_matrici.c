#include <stdio.h>

#define ROW 3
#define COL 3

/*
* Scrivete la funzione "moltiplicaMatrici" che calcola la moltiplicazione tra
* due matrici quadrate di numeri interi.
*
* L'operazione consiste nell'effettuare il prodotto scalare tra le righe della
* prima matrice e le colonne della seconda.
*
* Esempio:
* |a b| |e f| ____ |a*e+b*g a*f+b*h| | 00*00+01*10 00*01+01*11 |
* |c d| |g h|      |c*e+d*g c*f+d*h| | 10*00+11*10 10*01+11*11 |
* 
* 1 2   2 4
* 3 4   6 8  ------ 1*2+2*6 = 14  i=0 j=0
* 									1*4+2*8 = 20  i=0 j=1
* 									3*2+4*6 = 30  i=1 j=0
* 									3*4+4*8 = 44  i=1 j=1
*
* | a b c | | j k l |      | a*j+b*m+c*p a*k+b*n+c*q a*l+b*o+c*r |
* | d e f | | m n o | ---- |
* | g h i | | p q r |      | 
*/
void moltiplicaMatrici(int (*mat1)[COL], 
		int (*mat2)[COL], int (*matRisultato)[COL] ){

	int i, j, k;

for (i = 0; i < ROW; ++i) {
	for (j = 0; j < COL; ++j) {
		
		//printf("[%d][%d]: ", i, j);
		for (k = 0; k < COL; ++k) {
		
		if(k>0)
			matRisultato[i][j] += mat1[i][k]*mat2[k][j];
		else
			matRisultato[i][j] = mat1[i][k]*mat2[k][j];
		
		}

	}
}


return;
}

int main (void) {

int mat1[ROW][COL] = { {1,2,3} , {4,5,6} , {7,8,9} };
int mat2[ROW][COL] = { {9,8,7} , {6,5,4} , {3,2,1} };

//int mat1[ROW][COL] = { {1, 2}, {3, 4} };
//int mat2[ROW][COL] = { {2, 4}, {6, 8} };

int matRisultato[ROW][COL];

//int dim = sizeof(mat1) / ( sizeof(int)*sizeof(int) ) ;

moltiplicaMatrici(mat1, mat2, matRisultato);


  for (int i = 0; i < ROW; i += 1){
   for (int j = 0; j < COL; j += 1){
       printf("%d\t", matRisultato[i][j]);
   }
   printf("\n");
 }


}

