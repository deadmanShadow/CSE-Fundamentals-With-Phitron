#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 4, 50, 96, 10, 1, 0, 10, 10, 10, 60};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}