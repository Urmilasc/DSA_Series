#include<iostream>
using namespace std;

int getsum(int *arr , int n)
{
	int sum =0;
	
	for(int i=0 ; i<n ; i++)
	{
		sum =sum +arr[i];
	}
	return sum;
}


int main()
{
	
	/*
	char ch ='u';
	
	char *p = new char;          // dynamic array of cahracter created in heap area
	
	cout<<sizeof(ch)<<endl;
	cout<<sizeof(p)<<endl;
	
	int sum = sizeof(ch)+sizeof(p);
	cout<<"size of ch character is "<<sizeof(ch) <<" +  size of pointer p is  "<<sizeof(p) <<" = "<<sum;
	*/
	
	
	int n ;
	cin >> n;
	
	int *arr = new int[n];      /// variable size of array 
	
	for(int i =0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	
	
	int ans = getsum(arr, n);
	
	cout<<"answer is " <<ans<<endl;
	
	
}
