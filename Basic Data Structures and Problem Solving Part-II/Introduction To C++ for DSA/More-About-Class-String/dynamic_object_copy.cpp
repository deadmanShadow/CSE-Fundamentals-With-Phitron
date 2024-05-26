#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("rakib", 24);
    Person *sakib = new Person("sakib", 25);

    // rakib->name = sakib->name;
    // rakib->age = sakib->age;
    *rakib = *sakib;
    cout << rakib->name << " " << rakib->age << endl;
    return 0;
}