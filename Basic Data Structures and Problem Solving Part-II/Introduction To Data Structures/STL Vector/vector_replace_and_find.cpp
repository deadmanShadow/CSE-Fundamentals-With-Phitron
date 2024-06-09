#include <bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    vector<int> v = {1, 2, 5, 2, 7, 2, 9, 3, 4, 7, 2, 4, 1, 2};
    replace(v.begin(), v.end() - 1, 2, 100);
    for (int x : v)
    {
        cout << x << " ";
    }

        // find
    vector<int> v = {1, 2, 5, 2, 7, 2, 9, 3, 4, 7, 2, 4, 1, 2};
    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 2);
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}