#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class hero
{
    public:
    char *name;
    int health;
    char level;

    public:
    hero()
    {
        cout<<"simple constructor "<<endl;
        name = new char[100];
    }


    hero (hero& temp)
    {

        char *ch = new char [strlen(temp.name) +1 ];
        strcpy(ch , temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;

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
    void setname(char name[])  
    {
        strcpy(this->name , name);
    }

    void print()
    {
        
        cout<<endl<<"[  name is : "<<name<<" , ";
        cout<<" health is : "<<health<<" , ";
        cout<<" level is : "<<level<<"   ]";
        cout<<endl;
    }
};

int main()
{
    hero h1;

    h1.sethealth(70);
    h1.setlevel('B');
    char name[7] = "urmila";
    h1.setname(name);

    //h1.print();

    hero h2(h1); // hero h2 = h1 .... both are same 
    //h2.print();

    h1.name[0]= 'S';
    h1.print();

    h2.print();


    // copy assignmnet operator
    h1 = h2;
    h1.print();
    h2.print();
    

}