#include<iostream>
using namespace std;

class  human 
{
    protected:
    int height;
    int weight;
    protected:
    int age ;

    public:
    int getage()
    {
        return this->age;
    }
    void setage(int a)
    {
        this->age = a;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
    void mammal()
    {
        cout<<endl<<"human is mammal"<<endl;
    }

};

class male : public human
{
    public:
    int colour;

    public:
     void sleep()
     {
        cout<<endl<<"male is sleeping"<<endl;
     }

     /*int getage()
     {
        return age;
     }*/
     int getheight()
     {
        return height;
     }
};

class female : public male
{
    int getheight()
     {
        return height;
     }
};

int main()
{
    
    male m1;
    //cout<<endl<<m1.age<<endl;
    cout<<endl<<"height is : "<<m1.getheight()<<endl;
    //cout<<endl<<"age is : "<<m1.getage()<<endl;
    female f1;
    //cout<<endl<<f1.height<<endl;
    
    
    
    
    
    
    
    
    /*male obj1;
    obj1.sleep();
    obj1.setage(35);
    cout<<endl<<"age is : "<<obj1.getage()<<endl;
    obj1.mammal();
    cout<<endl<<obj1.getage()<<endl;*/
}

