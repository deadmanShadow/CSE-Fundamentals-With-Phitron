#include <stdio.h>
void fun(int x)
{
    printf("fun value - %p\n", &x);
}
int main()
{
    int x;
    printf("main fun value - %p\n", &x);
    fun(x);
    return 0;
}