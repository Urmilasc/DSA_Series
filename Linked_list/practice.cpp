#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor for doing deletion wala part
    ~node()
    {
        int value = this -> data;
        if(this->next !=  NULL)
        {
            delete next;
            this->next = NULL;

        }

        cout<<"deleted node is : "<<value<<endl;
    }
    
};


void insertAtStart(node* &head , int d)
{
    node *temp = new node(d);
    temp ->next = head;
    head = temp;
}

void insertAtTail(node* &tail , int d)
{
    node* temp = new node(d);
    tail -> next = temp;
    tail = tail->next;
}

void insertAtPosition(node* &tail ,node* &head  , int p , int d)
{
    // at start position
    if(p == 1)
    {
        insertAtStart(head,d);
        return ;
    }

    node* temp =head;
    int cnt =1;
       // to find the n-1 position
    while( cnt < p -1)
    {
        temp = temp -> next;
        cnt++;
    }

     // insert at the end
    if(temp ->next = NULL)
    {
        insertAtTail(tail , d);
        return;
    }

    // insert at middle
    node* nodeToinsert = new node(d);
    nodeToinsert ->next = temp -> next;
    temp  -> next = nodeToinsert;
}

void deletenode (int position  ,node* &head )
{
    if(position == 1)
    {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while( cnt < position)
        {
            prev = curr;
            curr = curr ->next;
            cnt++;
        }
        prev-> next = curr->next;
        curr -> next = NULL;

        delete curr;
    }
}

void print(node* &head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout << temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main()
{
   
    node *n1 = new node(13);
    node *head = n1;
    node *tail = n1;
    /*cout<< n1->data<<endl;
    cout << n1->next;*/
    print(head);

    insertAtStart(head , 12);
    print(head);

    insertAtTail(tail , 15);
    print(head);

    insertAtPosition(tail , head , 4 , 22);
    print(head);

    insertAtPosition(tail , head , 5 , 59);
    print(head);

    deletenode(4 , head);
    print(head);
    
    
}