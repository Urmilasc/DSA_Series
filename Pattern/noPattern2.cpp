//       1
//     2 2
//   3 3 3
// 4 4 4 4


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    
    int count = 1;
     for(int i = 1 ; i<= n ; i++){

        int space = n - i;
        for(int j=1 ; j<= n ; j++){
           
           if(j <= space){
            cout<<"-"<<" ";  // leave this string or cout empty too
           }
           else{
            cout<<count<<" ";
            
           }
           
           
        }
        cout<<endl;
        count++;
     }
}

