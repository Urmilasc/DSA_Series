#include <bits/stdc++.h>
#include <iostream>
using namespace std;


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
	int s= 0;
    int sum =0;
    int ans = -1;
    for(int i=0 ; i<m ; i++)
    {
        sum = sum +time[i];
    }
    int e = sum;
    
    int mid = s + (e-s)/2;
    
   while(s<=e)
   {
       if(isPossible(time , n , m, mid))
       {
            ans = mid;
            e = mid-1; //left part me he kyu because humhe minimum nikalna hai
       }
       else
       {
           s= mid+1;
       }
       mid = s + (e-s)/2;
   }
    return ans;
}


bool isPossible(vector<int> time , int n , int m , int mid)
{
  int  day=1;
    int timesum = 0;
    
    for(int i= 0; i<m ; i++)
    {
        if(timesum + time[i] <= mid)
        {
            timesum += time[i];
        }
        else
        {
            day++;
            if( day>n || time[i] >mid)
            {
                return false;
            }
            timesum = time[i];
        }
    }
    return true;
    
}




int main()
{
	int N = 3;
	int M = 5;
	vector<int>time[]={1 , 2 , 2 , 3 , 1};
	
	int res =ayushGivesNinjatest(int n, int m, vector<int> time) 
	cout<<res;
}
