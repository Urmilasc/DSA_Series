#include<iostream>
using namespace std;

class human
{
    public:
    int age = 80;


};

class male 
{
   public:
    string colour = "brown";
};
class female : public human , public male // multiple inheritance
{

};


int main()
{
    // male m1;
  //   cout<<endl<<"age is : "<<m1.age<<endl;

   female f1;
   cout<<endl<<"female age is : "<<f1.age<<endl;
    cout<<endl<<"female colour is : "<<f1.colour<<endl;
}