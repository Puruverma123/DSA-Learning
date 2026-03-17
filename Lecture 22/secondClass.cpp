#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    string name;
    int age, rollno;
};

int main()
{

    Student *s1 = new Student; // Dynamically allocated object

    // Accessing members using pointer
    // (*s1).name = "John"; // Accessing members using dereference operator
    // (*s1).age = 20;
    // (*s1).rollno = 101;

    // cout << "Name: " << (*s1).name << endl;
    // cout << "Age: " << (*s1).age << endl;
    // cout << "Roll No: " << (*s1).rollno << endl;

    // Accessing members using arrow operator

    s1->name = "John"; // Accessing members using arrow operator
    s1->age = 20;
    s1->rollno = 101;

    cout << "Name: " << s1->name << endl;
    cout << "Age: " << s1->age << endl;
    cout << "Roll No: " << s1->rollno << endl;

    return 0;
}