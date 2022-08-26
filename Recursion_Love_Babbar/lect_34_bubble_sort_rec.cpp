#include<iostream>
using namespace std;

void bubblesort(int *arr , int size)
{
    // base case
    if(size ==0 || size==1 )
     return ;
    

    // 1 case solve -- kepping largest element at the end
    for(int i =0 ;  i<size-1 ; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i] , arr[i+1]);
        }
    } 

    // recursive call
    bubblesort(arr , size-1);
}

int main()
{
    int arr[]={ 2 , 8 , 6 , 4 , 1};

    int size = 5;

    bubblesort(arr , size);

    cout<<endl;
    
    for(int i =0 ; i< size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}