#include <iostream>
using namespace std;

bool linearsearch(int arr[] , int size , int s)
{
	for(int i=0 ; i<size ; i++)
	{
		if(arr[i] == s)
		{
			return 1;
		}
	
	}
	return 0;
	
}
int main()
{
	int arr[10] = {5 , 7,-2, 10 , 22 , -2 , 0, 5 ,22 , 1};
    int size = 10;
	//element to be serach 1
	
	int s;
	cout<<"enetr the lement to be search : "<<endl;
	cin>>s;
	bool found = linearsearch(arr , size , s);

    if(found)
    {
    	cout<<"element is present"<<endl;
	}
	else
	{
		cout<<"element is not present"<<endl;
	}
	
}
