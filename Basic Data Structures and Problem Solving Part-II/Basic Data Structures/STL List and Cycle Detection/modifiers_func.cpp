#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 30, 30, 30, 30, 0, 50, 60, 70, 80, 90};
    // list<int> newList = {100, 200, 300};
    // vector<int> v = {50, 60, 70};
    // list<int> newList;
    // // newList.assign(myList.begin(), myList.end());
    // newList = myList;
    // myList.push_back(100);
    // myList.push_front(100);
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(), myList.end(), 30, 100);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }
    auto it = find(myList.begin(), myList.end(), 110);
    if (it == myList.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}