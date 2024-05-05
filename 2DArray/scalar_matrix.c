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
    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            if (i == k)
            {
                if (a[i][k] != a[0][0])
                {
                    flag = 0;
                }
            }
            else if (a[i][k] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Scalar Matrix\n");
    }
    else
    {
        printf("Not Scalar Matrix\n");
    }
    return 0;
}