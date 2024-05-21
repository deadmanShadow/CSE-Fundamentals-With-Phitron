#include <bits/stdc++.h>
using namespace std;
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
int main(){
    Student rakib(7,5,3.22);
    Student* habib = new Student(7,5,3.22);
    cout<<habib->roll<<" "<<habib->cls<<" "<<habib->gpa<<endl;
    return 0;
}