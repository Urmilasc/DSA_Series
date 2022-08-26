#include<iostream>
using namespace std;

void print(int arr[]  , int s , int e)
{
    for(int i =s ; i<=e; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int firstpos (int *arr , int l , int h , int x , int n)
{
    cout<<endl;
    print(arr , l  , h);
    if(h >= l)
    {
        int mid = l + (h - l)/2;
         cout<<"mid element index : "<<mid<<endl;
        if((mid == 0 || x > arr[mid - 1]) && arr[mid] == x )
        {
           
            return mid;
        }
        else if( x > arr[mid])
            return firstpos(arr , mid+1 , h , x , n);
        else
            return firstpos(arr , l , mid-1 , x , n);        
    }
    return -1;
}

int lastpos (int *arr , int l , int h , int x , int n)
{
   
    cout<<endl;
    print(arr , l , h);
    
    if(h >= l)
    {
        int mid = l + (h - l)/2;
         cout<<"mid element index : "<<arr[mid]<<endl;
        if((mid == n -1 || x < arr[mid + 1]) && arr[mid] == x )
        {
           
            return mid;
        }
        else if( x < arr[mid])
            return lastpos(arr ,l,  mid-1  , x , n);
        else
            return lastpos(arr , mid +1 ,h , x , n);        
    }
    return -1;
}




int main()
{
    int arr[]={0 , 0 , 1 , 1 , 2 , 2 , 2 , 2};
    int n = sizeof(arr) / sizeof(int);
    cout<<endl<<"the n is :"<<n<<endl;

    int x = 2;

    int ans = firstpos(arr , 0 , n-1 , x , n);
    int res = lastpos(arr , 0 , n-1 , x , n);

    cout<<endl<<"the first occurencce is : "<<ans<<endl;
    
    cout<<endl<<"the second occurrence is :"<<res<<endl;

}