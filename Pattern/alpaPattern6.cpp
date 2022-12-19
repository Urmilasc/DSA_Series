// A
// B C
// D E F
// G H I J

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    
    char start= 'A';
     for(int i = 1 ; i<= n ; i++){

        
        for(int j=1 ; j<= i ; j++){
           cout<<start<<" ";
           start++;
           
        }
        cout<<endl;
     }
}