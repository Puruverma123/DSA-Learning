// struct Node {
//     int data;
//     Node* next;
//     Node(int d) : data(d), next(nullptr) {}
// };

Node * removeTrialinZeroes(Node *head)
{
    while(head && head->data == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}

int getLength(Node *head)
{
    int count =0;
    while(head)
    {
        count++;
        head = head->next;
    }

    return count;
}

int isFirstBigger(Node *head1,Node *head2)
{
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    // Assume list 1 is greater than list 2
    if(l1>l2){
        return 1;
    }
    else if(l2>l1){
        return 0;
    }
    else 
    {
        while(head1)
        {
            if(head1->data>head2->data)
            {
                return 1;
            }else if(head2->data > head1->data)
            {
                return 0;
            }

            head1 = head1->next;
            head2 = head2->next;
        }
    }

    // both are equal
    return 2;
}

Node *reverse(Node *head)
{
    Node *curr = head, *prev =NULL,*future;
    while(curr)
    {
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }

    return prev;
}

Node* subtractLinkedLists(Node* l1, Node* l2) {
    

    l1 = removeTrialinZeroes(l1);
    l2 = removeTrialinZeroes(l2);

    int ans = isFirstBigger(l1,12);

    if(ans==0)
    {
        swap(l1,l2);
    }else if(ans==2)  return new Node(0);


    // reverse both list 
    l1 = reverse(l1);
    l2 = reverse(l2);

    int borrower=0;

    Node *result=NULL;

    while(l1)
    {
        int val1 = l1->data;
        int val2 = l2 ? l2->data : 0;

        int difference = val1 - val2 - borrower;

        if(difference<0)
        {
            borrower =1;
            difference = difference + 10;
        }else 
        {
            borrower = 0;
        }
        
        Node *temp = new Node(difference);
        temp->next = result;
        result = temp;

        l1 = l1->next;

        if(l2)
        {
            l2=l2->next;
        }
    }


    return removeTrialinZeroes(result);

}