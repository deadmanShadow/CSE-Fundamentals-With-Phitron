#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa){
        // (*this).roll = roll;
        // (*this).cls =cls;
        // (*this).gpa = gpa;
        this->roll=roll;
        this->cls =cls;
        this->gpa=gpa;
    }
};
int main(){
    Student Shamil(7,14,5.01);
    Student Rakib(4,7,4.33);
    cout<<Shamil.roll<<" "<<Shamil.cls<<" "<<Shamil.gpa<<endl;
    cout<<Rakib.roll<<" "<<Rakib.cls<<" "<<Rakib.gpa<<endl;
    return 0;
}