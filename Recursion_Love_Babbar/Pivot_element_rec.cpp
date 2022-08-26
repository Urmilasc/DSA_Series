#include<iostream>
using namespace std;



int pivotelement(int *arr , int n , int i , int sum , int current)
{
   

    if( i >= n)
       return -1;
  
    if(current == (sum - arr[i] - current))
    {
       cout<<endl<<" current : "<<current<<endl;
       cout<<endl<<"arr[i] : "<<arr[i]<<endl;
    
       return i;
    }

    current+=arr[i];
    cout<<endl<<" current position : "<<current<<endl;
    cout<<endl<<"arr[i] value : "<<arr[i]<<endl;

    pivotelement(arr , n , i+1 ,sum ,current);

}

int main()
{
    int arr[]={2 , 5, 1 , 4, 3};
    int n = 5;
    int sum =0;
    int current =0;
    for(int i =0 ; i< n ; i++)
    {
        sum = sum + arr[i];
    }
    cout<<endl<<" sum of array is : "<<sum<<endl;
    int ans =pivotelement(arr , n , 0 , sum , current);
    cout<<endl<<" index of pivot element : "<<ans<<endl;
}
