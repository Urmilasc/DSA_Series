#include<iostream>
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
};

int main()
{
    node* n1 = new node(10); // calling the constructor of node with parameter 10
    cout<< n1 -> data << endl;
    cout<< n1 -> next <<endl;
}