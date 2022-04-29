#include <stdio.h>
#define MAX 50

int trova(int *X, int dim, int elem){

	//printf("%d == %d ? \n", *X, elem);
if(*X == elem){
	return 1;}

if(dim == 0){
	return 0;}

return trova(X+1, dim-1, elem);

}

int main(){
	
	int X[] = { 3, 2, 4, 5, 7, 8, 9};
	//int len;
	int size = sizeof(X) / sizeof(int);
	
	//printf("Lunghezza array:\n");
	//scanf("%d", &len);

	int elem = 7;
	
	//trova(X, size-1, elem) ;
	printf("%d \n", trova(X, size-1, elem));
	
	return 0;
}
