// 1
// 2 2
// 3 3 3
// 4 4 4 4


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m;

    cout<<"Enter number :";
    cin>>n;
    

     for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j <= i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
     }
}