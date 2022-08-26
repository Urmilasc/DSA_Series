#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// here the implementation of node 
class node
{
     public:
     int data;
     node* next;
    
    // node class constructor to take input from main class
     node(int d)
     {
        this -> data = d;
        this -> next = NULL;
     }

     //destructor
     ~node()
     {
        int value = this -> data;
        //memoery free karwana ka code
        if(this->next != NULL)  // ye wala line without not operator k bina bhi sahi vahl raha hai 
        {                      //ye to confusion he re baba
                              
            delete next;
            this -> next = NULL;
        }

        cout<<"memoery free for node with data : "<< value <<endl;
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

void deletenode(int position , node* &head)
{
    //delete first or start node
    if(position == 1)
    {
        node* temp = head;
        head = head->next;
        // memory free start node ke
        temp -> next = NULL; // iss line k through hum jo faltu node nikal aata bahar but still next node ko point kar raha hai to wo pointer he delete kar de rahe hai
        delete temp;

    }
    else
    {
        // deleting any middle or last node 
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while( cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr ->next;
        curr -> next = NULL; // delete kiye jane wale node k pointer ko null kar de rahe hai nahi to wo bahar to aa jayega lekin aage wale node ko point kar ra rahega

        delete curr;
    }
}


/// -----------lect no 48 ------   ye code code studio pe properly chal raha hai but yaha pe infinite loop me fass gaya hui----->>>>>>>>>>>>
void removeDuplicates(node *head)
{
     
     /*unordered_set<int> seen;
     node* curr = head;
     node* prev = NULL;

     while(curr != NULL)
     {
        if(seen.find(curr -> data) != seen.end())
        {
            prev -> next = curr -> next;
            delete(curr);
        }
        else{
            seen.insert(curr -> data);
            prev = curr;
        }
        curr = prev-> next;
     }*/

    
     unordered_set<int> seen;
 
    /* Pick elements one by one */
    node* curr = head;
    node* prev = NULL;
    while (curr != NULL) {
        // If current value is seen before
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete (curr);
        }
        else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }



    // Write your code here
    // if(head == NULL)
    //     return NULL;
    
    /*node* curr = head;
     node* prev ; 
 
    while(curr!= NULL && curr -> next != NULL)
    {
        prev = curr;
        
        while(prev -> next != NULL)
        {
            if( curr-> data == prev ->next -> data)
            {
                node* nodeToDelete = prev -> next;
                prev -> next = prev -> next -> next;
                delete(nodeToDelete);
            }
            else
            {
                
               prev  = prev->next;
            }
        }
        curr = curr -> next;
    }
//    return head;*/
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

int main()
{
    // created a new node
    node* n1 = new node(17); // calling the constructor of node with parameter 10
    //cout<< n1 -> data << endl;
    //cout<< n1 -> next <<endl;

    // head pointed to new node
    node* head = n1; // point towards head node
    node* tail = n1; // end node ko point kar raha hai
    print(head);

    InsertAtHead(head , 18);
    print(head);


    insertAtTail(tail , 12);
    print(head);

    insertAtTail(tail , 15);
    print(head);

    insertAtPosition(tail , head , 4 , 25);
    print(head);

    insertAtPosition(tail , head , 5 , 17);
    print(head);

    cout<<"head : "<<head -> data <<endl;
    cout<<"tail: "<<tail -> data <<endl;


    // deletenode(3 , head);
    // print(head);

    // cout<<"head : "<<head -> data <<endl;
    // // cout<<"tail: "<<tail -> data <<endl;

    removeDuplicates(head);
    print(head);


}