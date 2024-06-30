#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // step 1 to sqrt(n)
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
                cout << n / i << endl;
        }
    }
    // step 2 to i*i<=n
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
                cout << n / i << endl;
        }
    }

    return 0;
}