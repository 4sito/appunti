#include <stdio.h>

/*
 * Definire una funzione ricorsiva che determini 
 * se esiste un percorso che permetta di attraversare 
 * un campo fiorito, dal basso verso l'alto, 
 * senza calpestare alcun fiore. 
 * Il campo è rappresentato da una matrice, i cui valori
 * rappresentano la presenza di un fiore (0) oppure la sua
 * assenza (1).
 * E' possibile muoversi una casella in alto oppure una 
 * casella verso destra. 
 * Leggere le coordinate della casella di partenza 
 * da tastiera.  
 * Ad esempio se il campo è definito come segue: 
 * {0,0,0,1,0}
 * {0,1,0,1,1}
 * {1,0,1,1,0}
 * {1,0,1,1,1}
 * {1,0,1,0,0}
 * e la casella di partenza è (4,2), un percorso è il 
 * seguente: SU, SU, DESTRA, SU, SU (raffigurato dalle X) 
 * {0,0,0,X,0}
 * {0,1,0,X,1}
 * {1,0,X,X,0}
 * {1,0,X,1,1}
 * {1,0,X,0,0}
 */
int mossa(int row, int col, int (*campo)[5], int x, int y ){

//printf("%d %d\n", x, y);

if(campo[x][y] != 0){
		if(x > 0){	
			//printf("SU ");
			if( mossa(row-1, col, campo, x-1, y)==0 ){
				if(y+1 <= 5){
					//printf("DESTRA ");
					return mossa(row, col, campo, x, y+1);
				}else
					return 0;
			}

		}

}else{
	return 0;
	}

return 1;
}


int main(void) {

    int campo[5][5]={
                         {0,0,0,1,0},
                         {0,1,0,1,1},
                         {1,0,1,1,0},
                         {1,0,1,1,1},
                         {1,0,1,0,0}
                    };
    int x, y;
    
		scanf("%d", &x);
    scanf("%d", &y);

    if (mossa(5, 5, campo, x, y)==1) {
        printf("Esiste un percorso da %d,%d alla riga 0\n", x, y);
    } else {
        printf("Non esiste un percorso da %d,%d alla riga 0\n", x, y);
    } 
}
