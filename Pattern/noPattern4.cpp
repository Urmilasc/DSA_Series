//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number:";
    cin>>n;
    
    int count = 1;
     for(int i = 1 ; i<= n ; i++){

        int space = n- i;
        for(int j=1 ; j<= n ; j++){
          
          if(j <= space){
            cout<<"-"<<" "; // leave this string or cout empty too
          }
          else{
            cout<<count<<" ";
            count++;
          }
           
        }
        cout<<endl;
     }
}