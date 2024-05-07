#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            scanf("%d", &a[i][k]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int k = col - 1; k >= 0; k--)
        {
            printf("%d ", a[i][k]);
        }
        printf("\n");
    }
    return 0;
}