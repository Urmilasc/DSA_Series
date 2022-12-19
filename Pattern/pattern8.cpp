// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    // for loop
   cout<<endl<<endl<<"by using for loop  "<<endl;
    for(int i =1 ; i<=n ; i++){
        
        for(int j=i ; j<2*i ; j++)
         {
            cout<<j<<" ";
         }
         cout<<endl;
    }
    // while loop
   cout<<endl<<endl<<"by using while loop"<<endl;
    int r=1;

    while(r <= n){
        int c=r;
        while(c < 2*r){
            cout<<c<<" ";
            c= c+1;
        }
        r=r+1;
        cout<<endl;
    }
}