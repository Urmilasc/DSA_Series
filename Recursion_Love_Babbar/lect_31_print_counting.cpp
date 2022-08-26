#include<iostream>
using namespace std;

void printcount(int n)
{
	if(n>=1)
	cout<<n<<" ";
	return printcount(n-1);
	
	
	
	

}


int main()
{
	int n ;
	cout<<endl<<"enter the number : "<<endl;
	cin>>n;
	
 printcount(n);
	
//	cout<<ans;
	
	return 0;
}
