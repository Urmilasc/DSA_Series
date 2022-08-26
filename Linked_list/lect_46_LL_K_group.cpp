#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void InsertAtHead(node * &head , int d)
{
    node* temp = new node(d); // node k data feild pe data daldo
    temp -> next = head;     // temp k next(link) field ko head me point karwa doo
    head = temp;  // head ko update kardo 
}

void insertAtTail(node* &tail , int d)
{
    node* temp = new node(d); // new node created with data as inputer as given
    tail -> next = temp;     // tail ke next wale feild ko temp ko point karwa rahe hai
    tail = tail->next;      // tail ko next pe point karwa doo || update kardo
}

void insertAtPosition (node* &tail, node* &head , int position , int d)
{
    // insert node at start
    if(position == 1)
    {
        InsertAtHead(head , d);
        return ;
    }
    node* temp = head;
    int cnt = 1;

    while(cnt <  position-1)
    {
        temp = temp -> next;
        cnt++;
    }

    // insert at the end
    if( temp -> next == NULL)  // last me insert  karenge  to tail update karna padega
    {                          // matlab ke tail ko last node ko point karwana hai
        insertAtTail(tail , d);
        return;
    }

    // creating a node for d
    node* nodetoInsert = new node(d);
    nodetoInsert -> next = temp -> next;

    temp -> next = nodetoInsert;
}

void print(node* &head)
{
    node* temp = head; // temp pointiing to head

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp =  temp -> next;// because temp k next me aage wale node ka address hai
    }
    cout<<endl;
}

// node* kReverse(Node* &head, int k) 
// {

// }
int main()
{
    node *n1 = new node(1);
    node* head = n1; // point towards head node
    node* tail = n1;
    print(head);

    insertAtPosition(tail , head , 2 , 2);
    print(head);

    insertAtPosition(tail , head , 3 , 3);
    print(head);

    insertAtPosition(tail , head , 4 , 4);
    print(head);
    
    insertAtPosition(tail , head , 5 , 5);
    print(head);
    insertAtPosition(tail , head , 6 , 6);
    print(head);

    // int k = 2;
    // (kReverse(head , k));
    
    // // kReverse(head , 2);


}
