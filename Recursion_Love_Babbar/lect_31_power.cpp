#include<iostream>
using namespace std;

int power(int n)
{
	if(n==0) // base case
	return 1;
	
	return 2 *power(n-1);    // recursive relation 
}


int main()
{
	int n ;
	cin >>n;
	
	int ans = power(n);
	
	cout<<ans;
	
	return 0;
}
