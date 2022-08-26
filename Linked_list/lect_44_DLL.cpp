#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int d)
    {
        this->data  = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node()
    {
        int value = this->data;

        if(this->next != NULL)
        {
            delete this->next;
            this->next = NULL;
        }

        cout<<"value deleteed is :"<<value<<endl;
    }
};

void insertAtHead(node* &head ,node* &tail ,  int d)
{
    // if case if LL is empty
    if(head == NULL)
    {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node* temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    

}

void insertAtTail( node* &head , node* &tail , int d)
{
    // if case is for if LL is empty
    if(tail == NULL)
    {
        node* temp = new node(d);
        tail = temp;
        head = temp;

    }
    else
    {
        node* temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

}

void insertAtPosition(node* &tail , node* &head , int position , int d)
{
    if(position == 1)
    {
        insertAtHead(head , tail , d);
        return;
    }

    node* temp =head;
    int cnt = 1;

    while(cnt <position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertAtTail(head, tail , d);
        return;
    }

    node *nodeToInsert = new node(d);

    nodeToInsert->next = temp->next;
    temp->next ->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;  // (->next) ----   idhar ye -next nahi likhna hai;

}
// length of linked list find karne ka code
int getlength(node* head)
{
    node* temp = head ;
    int len=0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void deletenode(int position, node* &head , node* &tail)
{
    if(position == 1)
    {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;


        temp->next = NULL;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt <position)
        {
            prev = curr;
            curr = curr ->next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        tail = NULL;
        curr -> next =  NULL;

        delete curr;

    }
}

// traversing or printing the data of node
void print(node* &head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node* n1 = new node(10);
    node* head = n1;
    node* tail = n1;
    print(head);
    
    //cout<<getlength(head)<<endl;


    insertAtHead(head , tail , 13);
    print(head);

     insertAtHead(head , tail , 20);
     print(head);

    

    
     insertAtTail(tail , tail , 99);
     print(head);
     cout<<" head "<< head -> data <<endl;
     cout<<" tail "<< tail -> data <<endl;   

     insertAtTail(tail , tail , 31);
     print(head);


     insertAtPosition(tail , head , 2, 100);
     print(head);

     insertAtPosition(tail , head , 1, 101);
     print(head);

     insertAtPosition(tail , head , 1, 102);
     print(head);

    //  deletenode(1 , head);
    //  print(head);

     deletenode(8 , head , tail);
     print(head);
     cout<<" head "<< head -> data <<endl;
     cout<<" tail "<< tail -> data <<endl;  

    insertAtPosition(tail , head , 8, 120);
     print(head); 
}