#include<iostream>
using namespace std;

int fbseries(int n)
{

    
    if(n==0)
        return 0;
    
    if(n==1)
     return 1;
 
    
   int ans = fbseries(n-1)+fbseries(n-2);
   return ans;

}

int main()
{
    
    int n;
    cout<<"enter the term for fabinacci number : "<<endl;
    cin>>n;
    int ans=fbseries(n);
    cout<<endl<<"the fibannci series term is : "<<ans<<endl;

    return 0;


}