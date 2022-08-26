#include<iostream>
using namespace std;

int partition(int arr[] , int s , int e)
{
    int pivot = arr[s];

    int count =0;
    for(int i= s + 1 ; i<=e ; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    int rightindex = s+count;

    swap(arr[rightindex] , arr[s]);


    int i = s,  j =e;

    while( i < rightindex  && j > rightindex)
    {
        while( arr[i] <= pivot)
        {
            i++;
        }
        while( arr[j] > pivot)
        {
            j--;
        }

        if( i < rightindex  && j > rightindex)
        {
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }

    return rightindex;
}

void quicksort(int *arr , int s , int e)
{
    //base case
    if( s >= e)
       return ;

    int p = partition(arr , s , e);

    quicksort(arr , s , p-1);

    quicksort(arr , p+1 , e);   
}

int main()
{
    int arr[]={ 2 , 5, 6 , 1 , 7 , 8};
    int size= 6;

    quicksort(arr , 0 , size-1 );

    cout<<endl;
    for(int i =0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}