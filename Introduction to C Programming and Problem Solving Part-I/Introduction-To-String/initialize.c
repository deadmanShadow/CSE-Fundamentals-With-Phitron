#include <stdio.h>
int main()
{
    // char ar[6] = {'s', 'h', 'a', 'm', 'i', 'l'};
    char a[] = "shamil\0";
    int sz = sizeof(a) / sizeof(char);
    printf("%d \n", sz);
    printf("%s", a);
    return 0;
}