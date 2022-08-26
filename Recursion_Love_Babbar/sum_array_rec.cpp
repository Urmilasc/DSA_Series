#include<iostream>
using namespace std;

int sumarray(int *arr , int n  , int i , int sum)
{
    // base case
    if(i >=n)
      return sum;


    // processing
    sum = sum + arr[i];


    // recurrence relation
    sumarray(arr , n , i+1 , sum);  

}

int main()
{
    int arr[]={2, 5 , 8 , 6};
    int n= 4;

    int ans= sumarray(arr , n ,  0 , 0);
    cout<<ans;
}