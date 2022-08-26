#include<iostream>
using namespace std;

void print(int *arr , int i , int j , int n)
{
    for( ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
  
}

void selectionsort(int *arr , int i , int j,  int n)
{
     
    print(arr ,i , j,  n);
    cout<<endl;
    // base  case
    cout<<endl<<"value of n : "<<n<<endl;
    if(n == 0 || n == 1)
      return ;

    for(int i =0 ; i<n ; i++)
    {
        for(int j =i+1 ;  j< n ; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i] , arr[j]);
            }
            else
            {
                selectionsort(arr , i , j++ , n-1);
            }
        }
    }
    selectionsort(arr , i+1 , j, n-1);  
}


int main()
{
    int arr[]= {8 , 2 , 6 , 4 , 12};
    int size = 5;

    selectionsort(arr , 0 , 1 ,  size);

    cout<<endl;
    for(int i =0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}