#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40};
    // cout << myList.front();
    // cout << myList.back();
    cout << *next(myList.begin(), 3);
    return 0;
}