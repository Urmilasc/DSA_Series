#include<iostream>
using namespace std;

bool ispalindrome(string &str , int i , int j)
{
    // base case
    if(i > j)
      return  true;
    

    if(str[i] !=str[j])  // it is a kind of base case
    {
        return false;
        
    }
    else{
       return  ispalindrome(str , i+1 , j-1); // recursive call

    }
     
}

int main()
{
    string  s= "abbccbba";

    bool ans = ispalindrome(s , 0 , s.length()-1);
    if(ans==true)
    {
        cout<<endl<<"palindrome"<<endl;
    }
    else{
        cout<<endl<<"not a palindrome"<<endl;
    }
}