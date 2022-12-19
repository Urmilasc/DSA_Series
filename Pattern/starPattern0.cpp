// * * * *
// * * *
// * *
// *

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    
    for(int i =1 ; i<=n ; i++){
        for(int j=n ; j>=i; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
     }
}

    //  for(int i =0 ; i<n ; i++){
    //     for(int j= n ; j>=0 ; j--){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    //  }
    
    //  int i=1;
    //  int j=4;
    //  while(i <= n){
        
    //     while(j>= 1){
    //         cout<<"*"<<" ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
     //}