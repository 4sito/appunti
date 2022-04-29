#include<stdio.h>


void change_twod(int (*a)[]);

int main()
{
    const int cols = 3;

    int i,j, two_d[2][cols] = {
                               {99,44,11},
                               {4,66,9}
                           };

    change_twod(two_d);

    printf("\n\nModified array : \n\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%3d ", two_d[i][j]);
        }
        printf("\n");
    }

    // signal to operating system everything works fine
    return 0;
}

void change_twod(int *arr)
{
    int i, j;

    printf("\n\nIncrementing every element by 5\n");
    // increment original elements by 6

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            arr[i][j] = arr[i][j] + 5;
        }
    }

}

