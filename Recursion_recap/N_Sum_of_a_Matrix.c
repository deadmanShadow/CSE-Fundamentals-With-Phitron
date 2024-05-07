#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], c[row][col];
    // a input
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            scanf("%d", &a[i][k]);
        }
    }
    // b
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            scanf("%d", &b[i][k]);
        }
    }
    // a + b
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            c[i][k] = a[i][k] + b[i][k];
        }
    }
    // final output
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            printf("%d ", c[i][k]);
        }
        printf("\n");
    }
    return 0;
}