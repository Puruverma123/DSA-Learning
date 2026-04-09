#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int value;
    Node *prev;
    Node *next;

    Node(int data)
    {
        value = data;
        prev = NULL;
        next = NULL;
    }
};

Node *reverse(Node *head)
{
    Node *prev = NULL, *curr = head, *future;

    while (curr)
    {
        future = curr->next; // store next
        curr->next = prev;   // reverse link
        prev = curr;         // move prev
        curr = future;       // move curr
    }

    return prev;
}

bool isChecked(Node *head1, Node *head2)
{

    while (head2)
    {
        if (head1->value != head2->value)
        {
            return false;
        }

        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}

int main()
{

    int arr[] = {10, 20, 30, 20, 10};

    // Insertion at the end of the list

    Node *head = NULL, *temp = NULL;

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
            temp->next->prev = temp;
            temp = temp->next;
        }
    }

    Node *slow = head, *fast = head, *prev = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    temp = head;

    // while (temp != slow->next)
    // {
    //     cout << temp->value << " ";
    //     temp = temp->next;
    // }

    // cout << slow->value << endl;
    // cout << fast->value;

    Node *temp2 = slow->next;
    slow->next = NULL;

    Node *head2 = reverse(temp2);

    // temp = head2;

    cout << "Is Palindrome " << isChecked(head, head2) << endl;

    // traverse the list

    // temp = head;

    // while (temp)
    // {
    //     cout << temp->value << " ";
    //     temp = temp->next;
    // }

    return 0;
}