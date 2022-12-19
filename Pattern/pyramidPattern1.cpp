//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    for(int i = 1 ; i<= n ; i++){

        int space = n-i;
        int count = 1;
        for(int j=1 ; j<= n ; j++){
           
           if(j <= space){
            cout<<"-"<<" "; // you can leave this string or cout empty too
           }
           else{
            cout<<count<<" ";
            count++;
           }
        }

        int c = 1;
        for(int j= i-1 ; j>=1 ; j--)
        {
            cout<<j<<" ";
        }
         cout<<endl;
     }     
}