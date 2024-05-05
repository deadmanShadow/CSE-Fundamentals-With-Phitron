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
    // exact row

    int e;
    scanf("%d", &e);

    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[e][i]);
    }

    // exact col
    int c;
    scanf("%d", &c);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][c]);
    }

    return 0;
}