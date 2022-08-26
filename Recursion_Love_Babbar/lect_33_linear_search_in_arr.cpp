#include<iostream>
using namespace std;

void print(int *arr , int n)
{
    cout<<endl<<"size of array is : "<<n<<endl;

    for(int i=0 ;i <n ; i++)
    {
        cout<<arr[i]<<" ";
    }


}


bool iskeypresent(int *arr , int size , int k)
{
    
    print(arr , size);
    
    if(size==0)  //// base case
       return false;

    if(k!=arr[0])  // processing
    {
        bool ans = iskeypresent(arr+1 , size-1 , k); // recurrence relation
        return ans; 
    }   
    else
    {
        return true;
    }
}

int main()
{
    int arr[]={ 2 , 5 , 8 , 13 , 15};
    int size = 5;
    int key = 13;
    
    cout<<endl<<"element to be found :"<<key<<endl;

    bool ans =iskeypresent(arr , size , key);
   
   if(ans)
   {
      cout<<endl<<"element is found"<<endl;
   }
   else
   {
     cout<<endl<<"element is not found"<<endl;
   }
    
}