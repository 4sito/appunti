#include <stdio.h>

int trova(int X[], int dim, int elem) {
	if (dim == 0) {
		return 0;
	}
	if (X[dim - 1] == elem) {
		return 1;
	}
	return trova(X, dim - 1, elem);
}

int main(){
	
	int X[] = { 3, 2, 4, 5, 7, 8, 9};
	//int len;
	int size = sizeof(X) / sizeof(int);
	
	//printf("Lunghezza array:\n");
	//scanf("%d", &len);

	int elem = 9;
	
	//trova(X, size-1, elem) ;
	printf("%d \n", trova(X, size-1, elem));
	
	return 0;
}
