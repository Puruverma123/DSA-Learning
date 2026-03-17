#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    string name;
    int age, rollno;

    Student(string n1, int age1, int rollno1)
    {
        name = n1;
        age = age1;
        rollno = rollno1;
    }
};

class Customer
{
public:
    string name;
    int age;
    string address;

    Customer(string n1, int age1, string address1)
    {
        name = n1;
        age = age1;
        address = address1;
    }
};

int main()
{

    // Student s1, s2;
    // s1.name = "John";
    // s1.age = 20;
    // s1.rollno = 101;

    // cout << "Name: " << s1.name << endl;
    // cout << "Age: " << s1.age << endl;
    // cout << "Roll No: " << s1.rollno << endl;

    // s2 = s1; // Copying the values of s1 to s2
    // cout << "Name: " << s2.name << endl;
    // cout << "Age: " << s2.age << endl;
    // cout << "Roll No: " << s2.rollno << endl;

    Student s3("Alice", 22, 102);
    cout << "Name: " << s3.name << endl;
    cout << "Age: " << s3.age << endl;
    cout << "Roll No: " << s3.rollno << endl;

    cout << endl;

    Customer *c2 = new Customer("Bob", 25, "456 Oak Ave"); // Dynamically allocated object

    cout << "Name: " << c2->name << endl;
    cout << "Age: " << c2->age << endl;
    cout << "Address: " << c2->address << endl;

    // Customer c1;
    // c1.name = "Alice";
    // c1.age = 30;
    // c1.address = "123 Main St";
    // cout << "Name: " << c1.name << endl;
    // cout << "Age: " << c1.age << endl;
    // cout << "Address: " << c1.address << endl;

    return 0;
}
