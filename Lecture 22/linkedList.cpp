#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

int main()
{

    // Node n1;  Stack memory allocation

    // n1.data = 10; // Accessing members using dot operator
    // n1.next = NULL;

    // Node n1(10, NUll);

    Node *n1 = new Node(10, NULL); // Heap memory allocation

    cout << "Data: " << n1->data << endl;
    cout << "Next: " << n1->next << endl;

    return 0;
}