#include<iostream>
using namespace std;

class animal
{
    public:
    void speak()
    {
        cout<<endl<<"animals bolte hai"<<endl;
    }
};

class dog : public animal
{
    public:
    void speak()
    {
        cout<<endl<<"dog is barking"<<endl;
    }
};

int main()
{
    dog d;
    
    d.speak();

}