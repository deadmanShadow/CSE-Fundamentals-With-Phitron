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
    else
    {
        for (int i = 0; i < row; i++)
        {
            for (int k = 0; k < col; k++)
            {
                if (i != k && a[i][k] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {
        printf("Not primary diagonal\n");
    }
    return 0;
}