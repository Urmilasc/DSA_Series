#include<iostream>
using namespace std;

int power(int a , int b )
{
    // base case 1
    if(b==0)
       return 1 ;


    // base case 2
    if(b==1)
       return a;
    
    // recursive call
    int ans = power(a , b/2);

    // if power is even
    if(b % 2 ==0)
        return ans * ans;
    // if power is odd    
    else
        return a * (ans * ans);          
}

int main()
{
    int a = 3 ;
    int b = 11;

    int ans =power(a , b);
    cout<<endl<<"the amswer is : "<<ans<<endl;
}