#include<iostream>
using namespace std;

class animal
{
   public:
    int weight = 86;
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

int main()
{
    dog d;
    cout<<endl<<"dog weight is : "<<d.weight<<endl;
    d.bark();

    cat c;
    cout<<endl<<"cat weight is : "<<c.weight<<endl;
    c.sound();
}

