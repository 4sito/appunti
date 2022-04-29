#include <stdio.h>	


void incrementa_array(int* A, int length, int x, int pos){
    
    // inserite qua il vostro codice
		int i;
		for (i = length - 1; i >= pos; --i) {
			
			if(A[i] != 0){
				A[i+1] = A[i];
				//printf("array[%d] = %d\n", i, A[i]);
			}
		}
		// 1. individuiamo le celle dell'array superiori alla posizione 'x'
		// 2. spostiamo tutti gli elementi delle celle superiori alla 'x' di una pszn
		// 3. mettiamo l'elemento nella posizione x
	
		A[pos] = x;
}

int main()
{
    int length = 10;
    int A[10] = {1,8,4,7,12,3,2,0,0,0}; 
    int x = 5;
    int pos = 4;
    
    incrementa_array(A,length,x,pos);
    
    printf("[");
    for (int i = 0; (i<length) && (A[i]!=0); i+=1)
        printf(" %d",A[i]);
    printf(" ]\n");

    return 0;
}
