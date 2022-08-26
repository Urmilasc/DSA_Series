#include<iostream>
using namespace std;

class animal
{
   public:
    int weight = 86;
    public:
    void jaanwar()
    {
        cout<<endl<<"janwaar le class hai"<<endl;
    }
};

class dog : public animal{

    public:
    void bark()
    {
        cout<<endl<<"dog is barking"<<endl;
    }

};

class cat : public animal
{
    public:
    void sound()
    {
        cout<<endl<<"billi doing meow meow"<<endl;
    }
};

class bird : public cat , public dog{
  
      public:
      void fiying()
      {
        cout<<endl<<"bird is flying"<<endl;
      }    
};

int main()
{
    bird b;
    b.sound();
    //b.animal::jaanwar();  // yaha pe scope resolution operetor ka use karna hai iss ambuiguity error ko solve karne k liye
    b.fiying();
    
    dog d;
    d.jaanwar();

}

