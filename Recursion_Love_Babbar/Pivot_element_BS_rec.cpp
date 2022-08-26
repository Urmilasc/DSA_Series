/*#include<iostream>
using namespace std;*/

/*int pivotelementrec(int *arr ,int s , int e ,  int n)
{
    if( s >=e)
       return -1;

    int mid = s +(e-s)/2;
        cout<<endl<<" mid is : "<<mid<<endl;
    if( arr[mid] > arr[mid+1])
       return arr[mid];





}

int main()
{
    int arr[]={ 3, 4, 5, 1, 2};
    int n = 5;
    int k = 1;
    int pivot = pivotelementrec(arr , 0 , n-1 , n);
    cout<<endl<<"pivot element is : "<<pivot<<endl;
}*/








/*
// C++ Program to search an element
// in a sorted and pivoted array

#include <bits/stdc++.h>
using namespace std;

// Standard Binary Search function
int binarySearch(int arr[], int s, int e, int key)
{
	if (e < s)
		return -1;

	int mid = (s + e) / 2;
	if (key == arr[mid])
		return mid;

	if (key > arr[mid])
		return binarySearch(arr, (mid + 1), e, key);

	return binarySearch(arr, s, (mid - 1), key);
}

// Function to get pivot. For array 3, 4, 5, 6, 1, 2
// it returns 3 (index of 6)
int findPivot(int arr[], int s, int e)
{
	// Base cases
	if (e < s)
		return -1;
	if (e == s)
		return s;

	// low + (high - low)/2;
	int mid = (s + e) / 2;
	if (mid < e && arr[mid] > arr[mid + 1])
		return mid;

	if (mid > s && arr[mid] < arr[mid - 1])
		return (mid - 1);

	if (arr[s] >= arr[mid])
		return findPivot(arr, s, mid - 1);

	return findPivot(arr, mid + 1, e);
}

// Searches an element key in a pivoted
// sorted array arr[] of size n
int pivotedBinarySearch(int arr[], int n, int key)
{
	int pivot = findPivot(arr, 0, n - 1);

	// If we didn't find a pivot,
	// then array is not rotated at all
	if (pivot == -1)
		return binarySearch(arr, 0, n - 1, key);

	// If we found a pivot, then first compare with pivot
	// and then search in two subarrays around pivot
	if (arr[pivot] == key)
		return pivot;

	if (arr[0] <= key)
		return binarySearch(arr, 0, pivot - 1, key);

	return binarySearch(arr, pivot + 1, n - 1, key);
}

// Driver program to check above functions
int main()
{
	// Let us search 3 in below array
	int arr1[] = { 7 , 9 , 1 , 2, 3};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int key = 2;

	// Function calling
	cout << endl<<"Index of the element is : "
           << pivotedBinarySearch(arr1, n, key)<<endl;

	return 0;
}*/


#include<iostream>
using namespace std;

int getpivot(int *arr , int s , int e , int mid ,int n)
{
    if( s >=e)
       return mid;

       mid = s +(e-s)/2;

    if(arr[mid] >= arr[0])
      return getpivot(arr , mid+1 , e, mid , n ) ;
    else
      return getpivot(arr , s , mid , mid, n); 


   

}

int main()
{
    int arr[]={ 3, 4, 5, 1, 2};
    int n = 5;
    int k = 1;
    int pivot = getpivot(arr , 0 , n-1 , 0 ,  n);
    cout<<endl<<"pivot element is : "<<pivot<<endl;   
}



