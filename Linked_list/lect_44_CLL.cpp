#include<iostream>
#include<map>
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

    ~node()
    {
        int value = this->data;

        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"value deleted is : "<<value<<endl;
    }
};

void insertnode(node* &tail , int element , int d)
{
    // assuming that element is present in listt
    

    // empty list
    if(tail == NULL)
    {
        node* newnode = new node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else
    {
        // non - empty list
        // assuming that the element is present at last

        node* curr = tail;

        while(curr -> data != element)
        {
            curr = curr -> next;
        }

        // element found -> curr is representing element wala node
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deletenode(node* &tail , int value)
{
    //empty list case
    if( tail == NULL)
    {
        cout<<endl<<" list is empty !!"<<endl;
        return ;
    }
    else
    {
        // non - empty case 

        //assuming that value is present in linked list

        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // 1 (single node) is present wala case
        if( curr == prev)
        {
            tail = NULL;
        }

        // >=2 node of linked list

        else if(tail == curr)
        {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

bool iscircularlist(node* head)
{
    if(head == NULL)
    {
        return true;
    }

    node* temp = head -> next;

    while (temp != NULL && temp != head)
    {
        temp = temp -> next;
    }

    if(temp == head)
    {
        return true;
    }
    return false;
}


//////----------------------------lect_no . 46 --detect loop , floyds detection algo , get starting node , remove loop--------->>>>>>>>>>>>>>>>>>
bool detectloop(node* head)
{
    if(head == NULL)
    {
        return false;
    }

    map<node* , bool> visited;

    node* temp = head;

    while(temp != NULL)
    {
        // cycle is present
        if(visited[temp] == true)
        {
            cout<<"loop detect at "<<temp->data;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}


node* floydDetectLoop(node* tail)
{
    if(tail== NULL)
       return NULL;

    node* slow = tail;
    node* fast = tail;

    while(slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow == fast)
        {
            cout<<endl<<"loop detected at by using floyd's detection algo "<<slow ->data;
            return slow;
        }
    } 
    return NULL;  
}

node* getStartingNode(node* tail)
{
    if(tail == NULL)
    {
        return NULL;
    }

    node* intersection = floydDetectLoop(tail);
    node* slow = tail;

    while(slow != intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}


void removeLoop(node* tail)
{
    if(tail == NULL)
       return ;

    node* startOfLoop = getStartingNode(tail);
    node* temp = startOfLoop;

    while(temp -> next != startOfLoop)
    {
        temp = temp ->next;
    }  

    temp ->next = NULL; 
}



////------------till hear all is done in lect no 46 --------------->>>>>>>>>>>>>>>>>>>>>
void print(node* &tail)
{
    node* temp = tail;
    

    if(tail == NULL)
    {
        cout<<"list is empty"<<endl;
        return ;
    }
    do
    {
        cout<<tail-> data<<" ";
        tail = tail ->next;
    }
    while( tail != temp);

    cout<< endl;
    
}

int main()
{

    // node* n1 = new node(10);

     node* tail = NULL;

     //empty list me insert kar rahe hai
     insertnode(tail , 1, 3);
     print(tail);
     
     insertnode(tail , 3 , 5);
     print(tail);

     insertnode(tail , 5 , 7);
     print(tail);

     insertnode(tail , 7 , 9);
     print(tail);

     insertnode(tail , 5 , 6);
     print(tail);

     insertnode(tail , 9 , 10);
     print(tail);

     insertnode(tail , 3 , 4);
     print(tail);

     deletenode(tail , 5);
     print(tail);

     if(iscircularlist(tail))
     {
        cout<<endl<<"linked list is circular"<<endl;
     }
     else
     {
        cout<<endl<<"linked list is not circular"<<endl;
     }




    // ----------------->>>>>>>  lect n0 46 ---------------<<<<<<<<<<<<<<<<<
     if(detectloop(tail))
     {
        cout<<endl<<"loop is preent/detected ";
     }
     else{
        cout<<endl<<"loop is not present";
     }
     

     if(floydDetectLoop(tail))
     {
        cout<<endl<<"loop is detected by floyd detect algorithm";
     }
     else{
        cout<<endl<<"loop is not present by floyd detect algo";
     }

     node* startingNode = getStartingNode(tail);
     cout<<endl<<"starting node of linked list cycle is : "<<startingNode ->data;


      removeLoop(tail);
      cout<<endl;
      print(tail);


      // -------------------------till hear lect no 46-------------------<<<<<<<<<<<<<
}