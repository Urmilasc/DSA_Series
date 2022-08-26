#include<iostream>
using namespace std;

void print(int *arr , int i, int n)
{
    for( ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
  
}


void selectionsort(int arr[] , int beginindex ,   int size )
{
    print(arr ,beginindex , size);
    cout<<endl;

     //base case
     cout<<endl<<"minindex is : "<<beginindex<<endl;
     if(beginindex >= size-1){
        return ;
     }
     int minindex = beginindex;
     for(int i =beginindex ; i<size ; i++)
     {
        if(arr[i] < arr[minindex])
        {
            minindex = i;
        }
     } 
     int temp = arr[minindex];
     arr[minindex] = arr[beginindex];
     arr[beginindex] = temp;

     selectionsort(arr , beginindex+1 , size);   
}



int main()
{
    int arr[]= {8 , 2 , 6 , 4 , 12};
    int size = 5;

    selectionsort(arr , 0 , 5);

    cout<<endl;
    for(int i =0 ; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}