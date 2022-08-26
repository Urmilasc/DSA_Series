#include<iostream>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	
	int **arr = new int *[n];
	
	for(int i =0 ; i<n ; i++)
	{
		arr[i] = new int[n];
	}
	
	
	//creation done of 2d array in dyamic way by above lines
	
	//taking input
	
	for(int i=0 ; i<n ; i++)
	{
		for(int j =0 ; j<n ; j++)
		{
			cin>>arr[i][j];
		}
	}
	
	
	//printing 2D array 
	
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
