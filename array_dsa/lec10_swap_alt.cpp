#include<iostream>
using namespace std;

void swapalt(int arr[] , int n)
{
	
	for( int i=0 ; i<n ; i+=2)
	{
	    int temp;	
		if(i+1<n)
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			//swap(arr[i] , arr[i+1]);
		
		}
	
		
	}
}

void printarray(int arr[], int n)
{
	for(int i=0 ;i<n ; i++)
	{
		cout<<" "<<arr[i] ;
	}
	cout<<endl;
}
int main()
{
 int arr[6]={1 , 2, 3, 4,5 , 6};
 int odd[5]={5 , 9 , 5 , 2, 1};
   swapalt(arr , 6);
   printarray(arr , 6);
   
   swapalt(odd , 5);
   printarray(odd , 5);
}
