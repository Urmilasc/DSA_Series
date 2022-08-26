#include<iostream>
using namespace std;

bool ksum(int arr[] , int size , int n )
{
	for(int i=0 ; i<size ; i++)
	{
		while(size>=0)
		{
			
			if(arr[i]+arr[i+1]==n)
		{
			return 1;
		}
			
		
		
	}
	
     return 0;	
	
	
	
}
int main()
{
	
	int a[]={10 , 15 , 3 , 7};
	int size=4;
	
	int key = 13;
	
   	bool found =ksum(a , size , key);
   	if(found)
   	{
   	  cout<<"element ko + karna ka index hai";	
	}
	else
	{
		cout<<"not present valid indexes";
	}
   
}
