#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int n , int m)
{
	if(n==0)
	return m;
	
	if(m==0)
	return n;
	
	while(n != m)
	{
		if(n >m)
		{
			n = n-m;
		}
		else
		{
			m=m-n;
		}
	}

 return n;	
}


int main()
{
	int a , b;
	cout<<"enetr the two values you want the gcd : "<<endl;
	
	cin>>a>>b;
	
	int ans = gcd(a , b);
	
	cout<<"the GCD is : "<< ans <<endl;	
	

}
