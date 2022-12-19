// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number :";
    cin>>n;
   for(int i=0 ; i< n; i++){
         int count = 1;
      for(int j=0 ; j< n-i ; j++){
         cout<<count<<" ";
         count++;
      }
      for(int j= 1 ; j< n; j++){
         int space = i;
         if(j <= space){
            cout<<"*"<<" ";
         }
      }
      int c = n ;
      for(int j= 0 ; j < n ; j++){
         int space = i;
         if(j < space)
         {  cout<<"*"<<" ";  }

         else{  cout<<c<<" ";  }
         
          c--;
      }
      cout<<endl;      
   }    
}