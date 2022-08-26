#include<iostream>
using namespace std;

void merge(int *arr , int s , int e)
{
   int mid= (s+e)/2;

   int len1= mid -s + 1;     // jo do array ban rahe hai unka length find kiya hai
   int len2 = e - mid;

   // creating the array that can store the elements of two seperated array
   int *first = new int [len1];
   int *second = new int [len2];

   //copying the values  for first array
   int mainarrayindex = s ;
        for(int i =0 ; i<len1 ; i++)
        {
            first[i] = arr[mainarrayindex];
            mainarrayindex++;
        }

    // copying values in second array
     mainarrayindex=mid+1;
    for(int i =0 ; i<len2 ; i++)
    {
        second[i] = arr[mainarrayindex++];
    }


    /// merge to sorted wala question ka logic / game

    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s ;


    while(index1 < len1  &&  index2 < len2)
    {
        if(first[index1]  <  second[index2])
        {
            arr[mainarrayindex] = first[index1];
            mainarrayindex++;
            index1++;
        }
        else if(first[index1]  >  second[index2])
        {
            arr[mainarrayindex] = second[index2];
            mainarrayindex++;
            index2++;
        }
    }


    while(index1  <  len1)   //this check is for if the two array are different in size ...
    {
        arr[mainarrayindex++] = first[index1++];
    }

    while(index2  <  len2)
    {
        arr[mainarrayindex++] = second[index2++];
    }


    delete []first;   /// dynamic memory allocation ho rahe hai soo heap area me memory ban rahe hai
    delete []second;   // to usss memory space ko manually delete karna padega...
}


void mergesort(int *arr , int s , int e)
{
    //base case
    if(s >=e)
      return ;

   // cout<<"hii";
    int mid = (s+e)/2;
    //left wala part sort karna hai
    mergesort(arr , s , mid) ;

    //right wala part sort karna hai
    mergesort(arr , mid+1 , e);

    //merge karna hai abb
    merge(arr , s , e); 
}

int main()
{

    int arr[]={4 , 2 , 3 , 6 , 1};
    int n = 5;

    mergesort(arr , 0 , n-1);
    cout<<endl;
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}