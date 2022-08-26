#include<iostream>
using namespace std;

bool issorted(int arr[] , int size )
{
    if(size==0 || size==1)
    {
        return true;
    }
    
     bool ans;
     if(arr[0]<arr[1])
     {
          ans =  issorted(arr+1,size-1);
     }
     else{
        return false;
     }

   return ans;
}

int main()
{
    int arr[]={1 , 3, 5, 7 , 8 , 9};
    int size = 6;

    bool res = issorted(arr, size);
    
    if(res)
    {
        cout<<endl<<endl<<"array is sorted"<<endl<<endl;
    }
    else{
        cout<<endl<<endl<<"array is not sorted"<<endl<<endl;
    }



    return 0;

}


