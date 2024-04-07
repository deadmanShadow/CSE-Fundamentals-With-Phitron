#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        char ans = a - 32;
        printf("%c", ans);
    }
    else if (a >= 'A' && a <= 'Z')
    {
        char ans = a + 32;
        printf("%c", ans);
    }
    else
    {
        printf("%c", a);
    }
    return 0;
}
