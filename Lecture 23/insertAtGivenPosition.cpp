#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int value;
    Node *next, *prev;

    Node(int data)
    {
        value = data;
        next = NULL;
        prev = NULL;
    }
};

int main()
{

    Node *head = NULL, *temp = NULL;

    int x = 3;

    int arr[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        if (!head)
        {
            head = new Node(arr[i]);
            temp = head;
        }
        else
        {
            temp->next = new Node(arr[i]);
            temp->next->prev = head;
            temp = temp->next;
        }
    }

    Node *tail = new Node(300);

    temp = head;

    x = x - 1;
    while (x--)
    {
        temp = temp->next;
    }

    tail->next = temp->next;
    temp->next = tail;
    tail->next->prev = tail;
    tail->prev = temp;

    temp = head;

    while (temp)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    return 0;
}