#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls, double gpa){
        this->roll= roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student* fun(){
    Student* Rafi = new Student(3,6,4.33);
    return Rafi;
}
int main(){
    Student* result = fun();
    // cout<<result.roll<<" "<<result.cls<<" "<<result.gpa<<endl;
    cout<<(*result).roll<<" "<<(*result).cls<<" "<<(*result).gpa<<endl;
    delete result;
    return 0;
}