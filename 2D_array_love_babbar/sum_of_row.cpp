#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestrowsum(int arr[][3], int row ,int col)   // largest row ka index or sum bataya ja rha hai
{
	int maxi = INT_MIN;
	int rowindex=-1;
	
	for(int row = 0 ; row<3 ; row++)
	{
		int sum=0;
		for(int col =0 ; col<3 ; col++)
		{
			sum += arr[row][col];
		}
		
			if(sum >maxi)
	    {
	    	maxi =sum;
	    	rowindex =row;
		}
    }
    
    
	
	cout<<endl<<"the maximum sum of the rows is : "<<maxi;
	return rowindex;
	
}

int largestcolsum(int arr[][3] , int row , int col)
{
	int maxi = INT_MIN;
	int rowindex=-1;
	for(int col = 0 ; col<3 ; col++)
	{
		int sum=0;
		for(int row=0 ; row<3; row++)
		{
			sum += arr[row][col];
		}
		
	   
	   if(sum > maxi)
	   {
	   	  maxi =sum;
	   	  rowindex =col;
		}	
	}
	
	cout<<endl<<"the maximum sum of the coloumn is : "<<maxi;
	return rowindex;
}

int smallestcolsum(int arr[][3] , int row , int col)   //printng the smallest sum of  column array
{
	int maxi = INT_MAX;
	int rowindex=-1;
	for(int col = 0 ; col<3 ; col++)
	{
		int sum=0;
		for(int row=0 ; row<3; row++)
		{
			sum += arr[row][col];
		}
		
	   
	   if(sum < maxi)
	   {
	   	  maxi =sum;
	   	  rowindex =col;
		}	
	}
	
	cout<<endl<<"the minimim sum of the coloumn is : "<<maxi;
	return rowindex;
}

int smallestrowsum(int arr[][3] , int row , int col)   //printng the smallest sum of  row array
{
	int maxi = INT_MAX;
	int rowindex=-1;
	for(int row = 0 ; row<3 ; row++)
	{
		int sum=0;
		for(int col=0 ;col<3; col++)
		{
			sum += arr[row][col];
		}
		
	   
	   if(sum < maxi)
	   {
	   	  maxi =sum;
	   	  rowindex =row;
		}	
	}
	
	cout<<endl<<"the minimim sum of the row is : "<<maxi;
	return rowindex;
}


void printsumrow(int arr[][3] , int row , int col)  ///printing sum of rows of array
{
	cout<<endl<<"printing sum of rows :";
	for(int row = 0 ; row<3 ; row++)
	{
		int sum=0;
		for(int col =0 ; col<3 ; col++)
		{
			sum += arr[row][col];
		}
		
		cout<<" "<<sum;
	}
	
	
}




void printsumcol(int arr[][3] , int row , int col)  ///printing sum of colomns of array
{
	cout<<endl<<"printing sum of coloumns :";
	for(int col = 0 ; col<3 ; col++)
	{
		int sum=0;
		for(int row=0 ; row<3; row++)
		{
			sum += arr[row][col];
		}
		
		cout<<" "<<sum;
	}
	
	
}

int main()
{
	int arr[3][3];
	
	

	cout<<"enetr the element of 2d array: "<<" "<<endl;
		for(int i =0 ; i<3 ; i++)
		{
			
			for(int j =0 ; j<3; j++)
			{
				
				cin>>arr[i][j];
				
			}
		}
		
		
		for(int i =0 ; i<3 ; i++)
		{
			cout<<endl;
			for(int j =0 ; j<3; j++)
			{
				
				cout<<"  "<<arr[i][j];
				
			}
		}
		cout<<endl;
		printsumrow(arr , 3 ,  3);	     	
	    printsumcol(arr, 3 , 3);
       int ansindex=  largestrowsum(arr , 3 , 3);
       int anscolindex = largestcolsum(arr , 3 , 3);
       int smallcolindex = smallestcolsum(arr , 3 , 3);
       int smallrowindex = smallestrowsum(arr , 3,3);
       cout<<endl<<"the answer index is :  "<<ansindex<<endl;
       cout<<endl<<"the maximum answer index of coloumn is :  "<<anscolindex<<endl;
        cout<<endl<<"the minimum answer index of coloumn is :  "<<smallcolindex<<endl;
        cout<<endl<<"the minimum answer index of row  is :  "<<smallrowindex<<endl;
        
       
}
