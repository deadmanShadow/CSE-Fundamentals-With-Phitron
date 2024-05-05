#include <stdio.h>
int main()
{
    // declare 2d array
    int a[5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 3; k++)
        {

            scanf("%d", &a[i][k]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 3; k++)
        {

            printf("%d ", a[i][k]);
        }
        printf("\n");
    }

    return 0;
}