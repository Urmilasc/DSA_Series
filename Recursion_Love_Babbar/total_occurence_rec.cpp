#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int first(int *arr , int s , int e , int key , int n , int ans)
{
    if(s >e)
    {
        return ans;
    }

    int mid = s +(e-s)/2;
    cout<<endl<<"mid element is : "<<mid<<endl;
    if(arr[mid]==key)
    {
        ans = mid ;
        cout<<endl<<"answer is :"<<ans<<endl;
        return first(arr , s , mid-1, key , n , ans);
    }
    else{
        return first(arr , mid+1, e , key , n , ans );
    }
       
   
}

int last(int *arr , int s , int e , int key , int n ,int ans)
{
    if( s >e)
    {
        return ans;
    }
    int mid = s+(e-s)/2;
    cout<<endl<<"last wala mid element is : "<<mid<<endl;
    if(arr[mid] == key)
    {
        ans = mid;
        cout<<endl<<"answer is :"<<ans<<endl;
        return last(arr , mid+1 , e , key , n , ans);
    }
    else
    {
        return last(arr , mid+1 , e , key , n ,ans);
    }
    
}*/

int binarysearch(int arr[] , int l , int r , int x)
{
    if( r < l)
       return -1;

    int mid = l +(r-l)/2;

    if(arr[mid] == x)
    {
        return mid;
    }   

    if(arr[mid] > x)
       return binarysearch(arr , l , mid-1 , x);


    return binarysearch(arr , mid+1 , r , x);   
}

int countoccurence(int *arr , int n , int x)
{
    int ind = binarysearch(arr , 0 , n-1 , x);

    if( ind == -1)
        return 0;


    int count = 1;
    int left = ind-1;

    while(left >=0 && arr[left] == x )
    {
        count++;
        left--;
    }

    int right = ind+1;

    while( right < n && arr[right]  == x)
    {
        count++;
        right++;
    }

    return count;


}

int main()
{
    int arr[]={2 , 2, 3 , 4, 6, 6, 6};
    int n =7;
    int key = 6;
   // int count=0;
    //int ans =0;
    int ans= countoccurence(arr  , n , key);
    


    cout<<endl<<"Total occurnce is : "<<ans<<endl;
    /*cout<<endl<<"last  index : "<<lastindex<<endl;
    int res = (lastindex -firstindex )+1;
    cout<<endl<<"Total Occurence of number "<<key<<" is : "<<res<<endl;*/
}