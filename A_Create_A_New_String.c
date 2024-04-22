#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", &s, &t);
    int lengS = strlen(s);
    int lengT = strlen(t);
    printf("%d %d\n", lengS, lengT);
    printf("%s %s", s, t);
    return 0;
}