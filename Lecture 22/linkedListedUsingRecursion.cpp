#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Node *createNode(int arr[], int index, int n)
// {
//     if (index == n)
//     {
//         return NULL;
//     }

//     Node *newNode = new Node(arr[index]);
//     // Debugging statement to check the current index and value being processed
//     // cout << "Creating node with value: " << arr[index] << " at index: " << index << endl;

//     newNode->next = createNode(arr, index + 1, n);

//     // cout << "Returning node with value: " << newNode->data << " at index: " << index << endl;

//     return newNode;
// }

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    Node *head = NULL, *temp = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            temp = head;
        }
        else
        {
            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }

    // head = createNode(arr, 0, 5);

    int x = 3;
    int value = 80;

    temp = head;
    x--; // Decrement x to move to the correct position (x-1) for insertion

    while (x--)
    {
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Traverse the lust

    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}