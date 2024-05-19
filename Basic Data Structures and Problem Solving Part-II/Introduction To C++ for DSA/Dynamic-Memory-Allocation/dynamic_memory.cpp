#include <bits/stdc++.h>
using namespace std;

int * fun() {
    int *a = new int;
    cout<<"Fun: "<<a<<endl;
    *a = 100;
    return a;
}
int main(){
    // int *a = new int;
    // *a=10;
    // cout<<*a<<endl;
    // float *x = new float;
    // *x = 2.54;
    // cout<<*x<<endl;
    int *p = fun();
    cout<<"Main: "<<p<<endl;
    return 0;
}