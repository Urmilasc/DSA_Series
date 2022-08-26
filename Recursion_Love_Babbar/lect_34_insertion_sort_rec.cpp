#include<iostream>
using namespace std;

void print(int *arr , int i , int size)
{
    for( ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


void insertionsort(int *arr , int i ,  int size)
{

    cout<<endl;
    print(arr , i , size);
    if( size <= 1)
         return;

    int temp = i;
    int j = i-1;
    for( ; j>=0 ; j--)
    {
        if(arr[i-1] < arr[j])
        {
            j = temp;
        }   
        arr[j+1] = temp;  
        
    }

    insertionsort(arr , i+1 ,  size);  
}

int main()
{
    int arr []= { 3 , 2 , 5 , 6 , 1};
    int size = 5;
    
    insertionsort(arr , 1 , size );


    cout<<endl;
    for(int i =0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
