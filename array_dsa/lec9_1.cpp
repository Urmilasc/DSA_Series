#include <iostream>
using namespace std;


void printarray(int arr[] , int size)
{
    int sizeorarray = sizeof(arr)/sizeof(int);
    cout<<"size of array is " << sizeorarray <<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
void printarraychar(char arr[] , int size)
{
    for(int i=0 ; i<size ; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
int main() {
	int number[15];
	
	cout<< endl << "everything is fine" << endl << endl;
	int n=15;
	int first[15]={2, 7 , 6 , 8};
	int sizeorarray = sizeof(first)/sizeof(int);
    cout<<"size of array is " << sizeorarray <<endl;
	printarray(first , n);
    
	
	int second[10] = {0};
	int n1=10;
	//printarray(second , n1);

	int third[5]={8};
	int n2=5;
	//	printarray(third , n1);
	
	char ch[5]={'a' , 'b' , 'c', 'd' , 'e'};
	
	printarraychar(ch , sizeof(ch));
	return 0;
}
