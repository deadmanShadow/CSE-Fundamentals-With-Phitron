#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 100; i = i + 1)
    {
        // step one to not showing 50
        // if (i == 50)
        // {
        //     break;
        // }
        printf("%d \n", i);
        // second one
        if (i == 50)
        {
            break;
        }
    }
    return 0;
}