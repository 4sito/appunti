#include<stdio.h>

/* Dato un Array A di dimensione len, filtrare tutti gli elementi f.
 * Questo significa restituire l'array compattato composta da tutti gli elementi originali di A meno gli elementi uguali ad f.
 * ES: [1,24,3,4] 3 -> [1,24,4]
 * ES: [1,2,1,3,4,6] 1 -> [2,3,4,6]
*/

void filter(int *A, unsigned int *len, int f){

int *new_array = A;
int i,j;

unsigned int size = *len;

for (i = 0; i < size; ++i) {
		
		if(*(A+i) != f){
			
				*new_array = *(A+i);
				new_array=new_array+1;

			}
		else *len = *len - 1;
		
		}


}



int main(){
    
		unsigned int len;
  	//unsigned int len = 10;  
		int f = 2;
		
    scanf("%2u", &len);
    
		int A[len];
		//int A[] = { 1, 22, 45, 7, 2, 5, 2, 9, 1, 2};

    for(int i = 0; i<len; i=i+1){
        scanf("%d", A+i);
    }

    scanf("%d", &f);

    // definire ed utilizzare qui una funzione void filter(...)

		filter(A, &len, f);

    printf("[");
    for (int i = 0; i<len; i+=1)
        printf(" %d",A[i]);
    printf(" ]\n");

}
