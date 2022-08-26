#include<iostream>
using namespace std;

class hero      // class
{
    public:
    int health = 70;  // properties 
    private:
    char level = 'A';
    public:
    char getlevel()
    {
        return level;
    }

    void setlevel(char ch)
    {
        level = ch;
    }
    
    
};


int main()
{

   hero urmila;   // object of hero class created

   hero a ; // static memory
   cout<<endl<<"level is : "<<a.getlevel()<<endl;

   a.setlevel('D');

   cout<<endl<<"level after cahnaging in main function : "<<a.getlevel()<<endl;


   hero *b = new hero ; // dynamic memory allocation

   cout<<endl<<"level is : "<<(*b).getlevel()<<endl; // accessing by derefrence opertaor  

   b->setlevel('G');  

    // accessing by arrow operator in dynamic memory
   cout<<endl<<"level after changing in main function dynamicaaly : "<<b->getlevel()<<endl;
   
//    cout<<"urmila level is : "<<urmila.getlevel()<<endl;

//    urmila.setlevel('B');

//     cout<<"urmila level is : "<<urmila.getlevel()<<endl;
//    cout<<endl<<"size : "<<sizeof(urmila)<<endl;
//    cout<<endl<<" health is : "<<urmila.health<<endl;
//    //cout<<endl<<" level  is : "<<urmila.level<<endl;
}