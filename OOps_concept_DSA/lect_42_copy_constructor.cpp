#include<iostream>
using namespace std;

class hero
{
    public:
    int health;
    char level;

    hero (int health , char level)
    {
        this->health = health;
        this->level = level;
    }

    hero (hero& temp)  // here comes that calling of copy constructor
    {
       this->health = temp.health;
       this->level = temp.level;
    }

    void print()
    {
        cout<<endl<<"health is : "<<health<<endl;
        cout<<endl<<"level is : "<<level<<endl;
    }
};

int main()
{
    hero urmila (70 , 'A');
    
    hero urmi(urmila);//copy urmila object to urmi object
    urmi.print(); 

}