#include <stdio.h>
void fun(int *p)
{
    // printf("x value - %p\n", p);
    *p = 500;
}
int main()
{
    int x = 100;
    // printf("x value - %p\n", &x);
    fun(&x);
    printf("%d\n", x);
    return 0;
}