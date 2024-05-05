#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int element = row * col;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            scanf("%d", &a[i][k]);
        }
    }
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            if (a[i][k] == 0)
            {
                cnt++;
            }
        }
    }
    if (element == cnt)
    {
        printf("Zero/null Matrix\n");
    }
    else
    {
        printf("Not zero/null matrix\n");
    }

    return 0;
}