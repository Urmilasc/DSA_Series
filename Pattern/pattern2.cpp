// 3 2 1 
// 3 2 1 
// 3 2 1
// 3 2 1
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows:";
    cin>>n;
    cout<<"Enter number of coloums:";
    cin>>m;
     //using for loop
    for(int i =0 ; i<n ; i++){
        for(int j= m ; j>0 ; j--){
            cout<<j<<" ";
        }
        cout<<endl;
     }
     cout<<endl<<endl;
}
      


//using while loop

   //   cout<<"printing pattern using while loop"<<endl;
   //   int i=1;
   //   while (i<n){
   //      int j = 1;
   //      while (j <= m)
   //      {
   //          cout<<n-j+1<<" ";
   //          j++;
   //      }
   //      cout<<endl;
   //      i++;
   //   }     