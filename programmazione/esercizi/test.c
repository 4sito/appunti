#include <stdio.h>  

int *getarray(int *a)  
{  
    int i, j = 1, num = 10;
  	
		for (i = 0; i < num; ++i) {

			if ( num % i == 0){
				a[j] = i;
				printf("%d è divisore di %d\n", i, num);
			  j++;
		}
		}
return a;
}  
int main()  
{  
  int *n;  
  int a[2];  
  n=getarray(a);  
  
	printf("\nElements of array are :");  
  for(int i=0;i<2;i++)  
    {  
        printf("%d", n[i]);  
    }  
    return 0;  
}  
