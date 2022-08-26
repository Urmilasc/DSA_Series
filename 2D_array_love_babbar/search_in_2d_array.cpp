#include<iostream>
#include <bits/stdc++.h>
using namespace std;


bool ispresent(int arr[][4] , int f, int row , int col)
{
	for(int i =0 ; i<3 ; i++)
	{
	
		for(int j =0 ; j<4; j++)
		{
			
			if(arr[i][j]==f)
			{
				return 1;
			}
			
		}
	}
	return 0;
}
int main()
{
	int arr[3][4];
	
	int s=3;

	while(s>=0)
	{
	
	
		cout<<"enetr the element of 2d array: "<<" ";
		for(int i =0 ; i<3 ; i++)
		{
			
			for(int j =0 ; j<4; j++)
			{
				
				cin>>arr[i][j];
				
			}
		}
		
		
		for(int i =0 ; i<3 ; i++)
		{
			cout<<endl;
			for(int j =0 ; j<4; j++)
			{
				
				cout<<"  "<<arr[i][j];
				
			}
		}
		cout<<endl;
		int target;
		cout<<"enter the element to be found : ";
		cin>>target;
		
		if(ispresent(arr , target , 3 , 4))
		{
			cout<<"element found";
		}
		else
		{
			cout<<"element not present";
		}
	 s++;
   } 
   
  
}
