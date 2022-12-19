// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    
    for(int i =1 ; i<= n ; i++){
        
        for(int j= i ; j>= 1 ; j--){
            cout<<j<<" ";
        }
        cout<<endl;
     }
}


//  for(int i =1 ; i<= n ; i++){
    //     int value = i;
    //     for(int j= 1 ; j<= i ; j++){
    //         cout<<value<<" ";
    //         value = value -1;
    //     }
    //     cout<<endl;
    //  }
