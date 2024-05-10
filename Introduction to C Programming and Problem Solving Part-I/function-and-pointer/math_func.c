#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double x;
    scanf("%lf", &x);
    int ans = ceil(x);
    int ans = floor(x);
    int ans = round(x);

    double x;
    scanf("%lf", &x);
    double ans = sqrt(x);
    printf("%0.2lf", ans);

    double a, b;
    scanf("%lf %lf", &a, &b);
    double ans = pow(a, b);
    printf("%0.2lf\n", ans);

    int p;
    scanf("%d", &p);
    int ans = abs(p);
    printf("%d\n", ans);
    return 0;
}