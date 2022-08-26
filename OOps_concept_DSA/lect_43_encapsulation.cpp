#include<iostream>
using namespace std;

class student    // so here the class is working as wrapper around the
{               //  data members and function ...soo we acheived the encapsulation
    private:
      string name;  // and all this data member are private so here we also achieved the
      int age ;     // fully encapsulated class....
      int height;

    public:
      int gethealth()
      {
        return age;
      }  
};

int main()
{
    student s1;
    cout<<endl<<"everything is fine"<<endl;
}