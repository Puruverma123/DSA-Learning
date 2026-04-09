// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev,*next;
    
    Node(int val)
    {
        data=val;
        prev = next = NULL;
    }
};

class Deque{
    public:
    Node *front,*rare;
    int size;
    
    Deque()
    {
       front = rare = NULL;
       size =0;
    }
    
    bool isEmpty()
    {
        return size==0;
    }
    
    //push Back
    void pushBack(int val)
    {
        if(isEmpty())
        {
            front = rare = new Node(val);
        }else
        {
            rare->next = new Node(val);
            rare->next->prev = rare;
            rare = rare->next;
        }
        size++;
        cout<<val << " Pushed Back"<<endl;
    }
    //push front
     void pushFront(int val)
    {
        if(isEmpty())
        {
            front = rare = new Node(val);

        }else
        {
            Node *temp = new Node(val);
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
        size++;
        cout<<val << " Pushed Front"<<endl;
    }
    //pop Back
    void popBack()
    {
        if(isEmpty())
        {
            cout<<"Deuque is Empty"<<endl;
        }
        else{
            // if contain only single element
            if(front==rare)
            {
                cout<<rare->data << " Popped Back from Dequeue"<<endl;
                delete rare;
                front = rare = NULL;
            }else
            {
                cout<<rare->data << " Popped Back from Dequeue"<<endl;
                Node *temp = rare;
                rare = rare->prev;
                rare->next = NULL;
                delete temp;
            }
                size--;
        }
    }
    //pop front
    void popFront()
    {
        if(isEmpty())
        {
            cout<<"Deque is Empty"<<endl;
        }
        else if(front == rare)
        {
            cout<<front->data << " Popped Front"<<endl;
            delete front;
            front = rare = NULL;
        }
        else
        {
            cout<<front->data << " Popped Front"<<endl;
            Node *temp = front;
            front = front->next;
            front->prev = NULL;
            delete temp;
        }
        size--;
    }
    
    int length()
    {
        if(isEmpty())
        {
            return -1;
        }else{
            return size;
        }
    }
    
    int getFront()
    {
        return front->data;
    }
    
    int getBack()
    {
        return rare->data;
    }
};



int main() {
    
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushFront(5);
    dq.pushFront(15);
    dq.pushFront(25);
    
    cout<<"Front element of Deque is "<<dq.getFront()<<endl;
    dq.popFront();
    cout<<"Front element of Deque is "<<dq.getFront()<<endl;
    cout<<"Back element of Deque is "<<dq.getBack()<<endl;
    dq.popBack();
    cout<<"Back element of Deque is "<<dq.getBack()<<endl;
    
    cout<<"Size of Deque is "<<dq.length()<<endl;


    return 0;
}