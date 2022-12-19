//       *
//     * *
//   * * *
// * * * *

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    
    
     for(int i = 1 ; i<= n ; i++){

        int space= n-i;
        for(int j=1 ; j<= n ; j++){
           
           if(j <= space){
            cout<<" "<<" ";
           }
           else{
            cout<<"*"<<" ";
           }
           
        }
        cout<<endl;
     }
    
}