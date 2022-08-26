#include<iostream>
using namespace std;

int getsum(int arr[], int size)
{
    if(size==0)
    return 0;

    if(size==1)
     return arr[0];

     int remainingpart = getsum(arr+1 , size-1);
     int ans = arr[0]+remainingpart;

     return ans;
}

int main()
{
    int arr[]={1 ,1 ,1,2, 5};
    int size=5;

    int sum =getsum(arr, size);

    cout<<endl<<endl<<"sum is : "<< sum <<endl ;
    return 0;
}
