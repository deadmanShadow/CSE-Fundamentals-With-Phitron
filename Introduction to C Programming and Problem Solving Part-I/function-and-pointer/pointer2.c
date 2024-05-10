#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    x = 200;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    return 0;
}