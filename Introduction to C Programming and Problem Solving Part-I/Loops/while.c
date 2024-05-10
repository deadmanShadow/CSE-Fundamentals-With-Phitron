#include <stdio.h>
int main()
{
    // for loop
    int i;
    for (i = 1; i <= 10; i = i + 1)
    {
        printf("%d\n", i);
    }

    // while loop
    int i;
    while (i <= 10)
        ;
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}