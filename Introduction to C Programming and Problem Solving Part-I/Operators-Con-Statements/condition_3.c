#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("I will go to the cox\n");

        if (tk >= 10000)
        {

            printf("i will go to the saint\n");
        }
        else
        {
            printf("I will return\n");
        }
    }
    else
    {
        printf("I will return Home\n");
    }
    return 0;
}