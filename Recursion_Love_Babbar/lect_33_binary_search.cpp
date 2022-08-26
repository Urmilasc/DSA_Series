#include<iostream>
using namespace std;

void print(int arr[]  , int s , int e)
{
    for(int i =s ; i<=e; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarysearch(int *arr , int s , int e , int k )
{
    cout<<endl;
    print(arr , s , e);
    if(s>e)   // base case 1
      return -1;


    int mid = s + (e-s)/2;
     cout<<"value of mid is : "<<arr[mid]<<endl;
    if(arr[mid]==k)    // base case 2
    {
        return true;
    }

    if(arr[mid] < k)
    {
        return binarysearch(arr , mid+1 , e, k ); // recurrence realtion
                                                // for search in right half
    }
    else{
       return binarysearch(arr , s , mid-1, k );// recurrence realtion
                                                // for search in left half
        
    }
}

int main()
{
    int arr[]= {2 , 4, 6 , 10 , 14 , 18};
    int size=6;
    int key = 18;
    
    int s = 0;
    int e = size-1;
    
    bool ans =binarysearch(arr , s , e , key );

    if(ans)
    {
        cout<<endl<<"present"<<endl;
    }
    else{
        cout<<endl<<"Absent"<<endl;
    }
}