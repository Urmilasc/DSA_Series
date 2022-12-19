// 1 1 1 1
//   2 2 2
//     3 3
//       4


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    
    int count = 1;
     for(int i = 0 ; i<= n-1 ; i++){

         int space = n -i;
        for(int j=n-1 ; j>= 0 ; j--){
           
           if(j >= space){
            cout<<"-"<<" "; // leave this string or cout empty too
           }
           else{
            cout<<count<<" ";
           }
 
        }

        cout<<endl;
        count++;
     }
}

