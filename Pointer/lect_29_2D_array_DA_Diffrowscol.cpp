#include<iostream>
using namespace std;

int main()
{
	
	
     int row;       
	cin>>row;
	
	
	int col;
	cin >> col;
	
	
	int **arr = new int *[row];
	
	for(int i =0 ; i<row ; i++)
	{
		arr[i] = new int[col];
	}
	
	
	//creation done of 2d array in dyamic way by above lines
	
	//taking input
	
	for(int i=0 ; i<row ; i++)
	{
		for(int j =0 ; j<col ; j++)
		{
			cin>>arr[i][j];
		}
	}
	
	
	//printing 2D array 
	
	for(int i=0 ; i<row ; i++)
	{
		for(int j=0 ; j<col ; j++)
		{
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
	
	// releasing the memory created by 2D array in heap area
	
	for(int i =0 ; i<row ; i++)
	{
		delete []  arr[i];     // coloumn wala heap area delete hojayega
	}
	
	
	   delete []arr;           // jo row wala hai area matlab k saare pointers jo coloumn ko pint kar rahe the wo delete hojayenge
}
