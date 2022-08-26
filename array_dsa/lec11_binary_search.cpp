#include<iostream>
using namespace std;

int binarysearch(int even[] , int size , int k)
{
	int s = 0 ;
	int e=size-1;
	
	int mid = (s+e)/2;
	
	while(s<=e)
	{
		if(even[mid] == k)
		{
			return mid;
		}
		if(even[mid] > k)
		{
			e = mid-1;
		}
		else
		{
			s= mid+1;
		}
		mid = (s+e)/2;
	}
	return -1;
}
int main()
{
	int even[6]={2 , 4, 6, 8, 10 , 12};
	
	
	int odd[5]={1 , 3, 5, 7,9};
	
	int index= binarysearch(even , 6 , 8);
	cout<<"the element is present at index : "<<index<<endl;
	
	
	int oddindex = binarysearch(odd , 5 , 3);
	cout<<"the element is present at index : "<<oddindex<<endl;
}
