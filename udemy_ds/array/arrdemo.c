// to demo the default initialization of arrays in c++
#include <stdio.h>

int main()
{
    int arr[5][10], i, j;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}