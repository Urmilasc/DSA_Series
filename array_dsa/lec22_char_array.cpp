#include<iostream>
using namespace std;

//to display length of char strig   or length function

int getlength(char name[])
{
	int count=0;
	for(int i=0 ; name[i] !='\0' ; i++)
	{
		count++;
	}
	return count;
}

void rstring(char name[] , int n)
{
     int s=0;
     int e=n-1;
     
     while(s<=e)
     {
     	swap(name[s] , name[e]);
     	s++;
     	e--;
	 }
	 
	 cout<<name;
}
int main()
{
	char ch= 'u';
	cout<<ch<<endl;
	
	char ch1[] = { 'u' , 'r' , 'm' , 'i'};
	cout<<ch1<<endl;
	
	
	///lets take input from user in char array
	
	char name[20];
	
	cin>>name;
	//name[2]='\0';        /// t due to this execition stop till 2 index 
	int len = getlength(name);
	cout<<"your name is "<<len <<endl;
     rstring(name , len);
//	cout<<name.length();
}
