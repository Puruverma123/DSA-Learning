#include <iostream>
#include <string>
using namespace std;

int main()
{

    cout << "Take intput as a string" << endl;

    string name;

    cout << "Enter a string: ";

    // cin >> name;

    // string name;
    // cin >> name; // Only reads one word!
    //              // Input: "Rohit Kumar"
    //              // Stores: "Rohit"

    getline(cin, name); // Reads entire line
    cout << "String is " << name;

    return 0;
}