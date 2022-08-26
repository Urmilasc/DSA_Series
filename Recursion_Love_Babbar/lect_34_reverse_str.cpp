#include<iostream>
using namespace std;

void revstr(string &str , int i , int j )
{
    cout<<endl<<str;

    // base case
    if(i > j)
       return ;


    //processing
    swap(str[i] , str[j]);
    i++;
    j--;

    //recurrence relation  
     revstr(str , i , j ); 
     
}

int main()
{
    string name = "abcde";
    
    
    revstr(name , 0 , name.length() -1);

   cout<<endl<<"reversse string is : "<<name<<endl;
}