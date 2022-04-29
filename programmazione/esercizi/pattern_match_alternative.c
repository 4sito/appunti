#include <stdio.h>
#include <string.h>
int main(){

		char arrs[3][10] = {"Tom", "Bob", "Harry"};
    char arrj[3][10] = {"Harry", "Tom", "Bob"};

    int index1;
    int index2;

    printf("Input ArrayS Index : ");
    scanf("%d", &index1);fflush(stdin);
    printf("Input ArrayJ Index : ");
    scanf("%d", &index2);fflush(stdin);

    if(strcmp(arrs[index1], arrj[index2]) == 0){
        printf("%s - %s : Same Value", arrs[index1], arrj[index2]);
    }
    else {
        printf("%s - %s : Different Value", arrs[index1], arrj[index2]);
    }
	
		return 0;

}
