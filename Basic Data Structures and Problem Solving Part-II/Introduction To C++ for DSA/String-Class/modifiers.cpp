#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "Hello";
    string b = "World";
    a+=b;
    a.append(b);
    cout<<a<<" "<<endl;
    cout<<b<<endl;
    a[5]='X';
    a.push_back('X');
    a.pop_back();
    cout<<a<<endl;

    a.assign("Gelo");
    cout<<a<<endl;
    string a = "HelloWorld";
    a.erase(4,1);
    a.replace(4,1,"So");
    a.insert(5,"Shamil");
    cout<<a<<endl;
    return 0;
}