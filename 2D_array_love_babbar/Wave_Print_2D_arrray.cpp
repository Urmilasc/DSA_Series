#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 3

void printWave(int arr[r][c] , int n , int m)
{
  vector<int> ans;
    for(int j =0 ; j< n ; j++)
    {
      if(j % 2 ==0)
      {
        for(int i=0 ; i<m ; i++)
        {
          cout<<arr[i][j]<<" ";
        }
        
      }
      else
      {
        for(int i= m-1 ; i >= 0 ; i--)
        {
          cout<<arr[i][j]<<" ";
        }
      }
    }
}

int main()
{
  // int row = 3 , col=3;
    int arr[r][c]= {{1 , 2, 3},
                    {4, 5, 6} ,
                    {7 , 8 , 9}};

    printWave(arr , r , c);
    // printArray(arr , row , col);
}
    

