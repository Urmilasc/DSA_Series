#include<iostream>
using namespace std;

class hero
{
    public:
    int health;
    char level;

    hero()
    {
        cout<<endl<<"constructor called"<<endl;
    }

    hero (int health , char level)
    {
        cout<<endl<<"this :"<<this<<endl;
        this->health  = health;
        this->level = level;
    }

    int gethealth()
    {
        return health;
    }

    void sethealth(int i)
    {
        health = i;
    }

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
    
    hero urmila;

    cout<<"health is : "<<urmila.gethealth()<<endl;

    
   hero *urmi =  new hero();

   urmi->sethealth(90);

   cout<<"health is :"<<(*urmi).gethealth()<<endl;

   hero urmilla(100 , 'B');
   cout<<endl<<"address of urmilla object is : "<<&urmilla<<endl;
   cout<<endl<<"health after parameter consructor: "<<urmilla.gethealth()<<endl;
   cout<<endl<<"level after parameter consructor: "<<urmilla.getlevel()<<endl;

   

    


}

