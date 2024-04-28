#include <stdio.h>
int sum(int y, int x)
{
    int sum = y + x;
    return sum;
}
int main()
{
    int s = sum(20, 10);
    printf("%d ", s);
    return 0;
}