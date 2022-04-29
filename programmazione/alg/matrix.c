#include <stdio.h>
#include <stdlib.h>

#define COLSS 4
#define ROWSS 4
// voglio creare un programma che si possa utilizzare per applicare l'algoritmo
// di Gauss su una qualsiasi matrice ricevuta in input dall'utente

void get_matrix(int (*mat)[COLSS], int rows, int cols);

void print_matrix(int (*mat)[COLSS], int rows, int cols);
// una funzione che semplicemente stampa la dimensione della matrice
void algoritmo(int (*mat)[COLSS], int rows, int cols); 
// l'algoritmo di Gauss composto di 3 procedure differenti

void primo(int (*mat)[COLSS], int rows, int cols, int x, int y, float n);
// somma la riga x con la riga y moltiplicata per un certo numero n

void secondo(int (*mat)[COLSS], int rows, int cols, int x, int y);
//  scambio il posto della riga x con il posto della riga y

void terzo(int (*mat)[COLSS], int rows, int cols, int x, float n); 
// moltiplica la riga x per un certo numero n 

int main(){

		const int rows = ROWSS, cols = COLSS;
		
		int mat[rows][COLSS];

		get_matrix(mat, rows, cols);

		int x, y, choice = 0;
		float n, denom, div;

	//	mat = mat;
		
		while(choice < 4){
		
		printf("\n\n");
		print_matrix(mat, rows, cols);

		printf("Che operazione vuoi fare:\n");
		printf("1) Riga X = Riga X + (Riga Y*(n))\n");
		printf("2) Riga X  < > Riga Y\n");
		printf("3) Riga X * n\n");
		printf("4) Termina l'algoritmo\n");
		
		scanf("%d", &choice);
		
		system("clear");

		if (choice == 1){

					printf("La riga da modificare X:\n");
					scanf("%d", &x);
					printf("La riga Y a cui sommare X:\n");
					scanf("%d", &y);

					printf("Il denominatore di n per cui moltiplicare la riga Y\n");
					scanf("%f", &denom);
					
					printf("Il divisore di n per cui moltiplicare la riga Y\n");
					scanf("%f", &div);
					
					n = denom/div;
					primo(mat, rows, cols, x, y, n);

		}	
		else if( choice == 2 ){

				printf("La riga X da sostituire con Y:\n");
				scanf("%d", &x);
				printf("La riga Y a cui sostituire X:\n");
				scanf("%d", &y);

				secondo(mat, rows, cols, x, y);

		}
		else if( choice == 3){
			printf("La riga X da moltiplicare:\n");
			scanf("%d", &x);
				
			printf("Il denominatore di n per cui moltiplicare la riga Y\n");
			scanf("%f", &denom);
					
			printf("Il divisore di n per cui moltiplicare la riga Y\n");
			scanf("%f", &div);
					
					n = denom/div;
					
				terzo(mat, rows, cols, x, n);
			}

		printf("\n\n");

		}
		
		print_matrix(mat, rows, cols);

		return 0;

}

void get_matrix(int (*mat)[COLSS], int rows, int cols){

	int i, j, x;

	for (i = 0; i < rows; ++i) {
		for (j = 0; j < cols; ++j) {
			printf("Matrice posizione [%d][%d] = \n", i, j);
			scanf("%d", &x);
			mat[i][j] = x;
		}
	}


}

void terzo(int (*mat)[COLSS], int rows, int cols, int x, float n){

	int i,j;

	for (i = 0; i < rows; ++i) {
		for (j = 0; j < cols; ++j) {
			if ( i == x ){
			
				mat[x][j] = mat[x][j] * n;
			
			}
		}
	}
}

void secondo(int (*mat)[COLSS], int rows, int cols, int x, int y){

int tmp_array[cols];
int i, j;

for (i = 0; i < rows; ++i) {
	for (j = 0; j < cols; ++j) {
		
		if ( i == x ){
			tmp_array[j] = mat[x][j]; // copiamo la riga x in tmp;
			mat[x][j] = mat[y][j];
																					// copiamo la riga y nella riga x;
			mat[y][j] = tmp_array[j];
																					// copiamo tmp (riga x) nella riga y;
		}
	}
}


}

void primo(int (*mat)[COLSS], int rows, int cols, int x, int y, float n){

// come prima cosa moltiplichiamo la riga y per n
// per esempio se y = 2, n = 4:

for (int i = 0; i < rows; i++){
	for (int j = 0; j < cols; j++)
	{
		if( i == x ){
			mat[x][j] = mat[x][j] + (mat[y][j] * n);
		}

	}

}

}

void print_matrix(int (*mat)[COLSS], int rows, int cols){

	//system("clear");	

	int i, j;
	
	for (i = 0; i < rows; ++i) {

		for (j = 0; j < cols; ++j) {
			
				printf(" %d ", *( *(mat + i) + j) );
			
		}
		printf("\n");
	}
	
	printf("\n\n");
}

