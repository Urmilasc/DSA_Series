#include<iostream>
using namespace std;

int totaloccurence(int *arr , int n , int key , int i , int cnt)
{
    if( i >=n)
      return cnt;

    if(key == arr[i])
    {
        cnt++;
    }

    totaloccurence(arr , n , key , i+1 , cnt);
    

}

int main()
{
    int arr[]={1 ,2, 3 , 3, 3, 3, 5};
    int n = 7;
    int key = 3;
    int count = 0;
    int ans =totaloccurence(arr , n, key , 0  , count);

    cout<<endl<<ans<<endl;

}