// A B C
// A B C
// A B C


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    

     for(int i = 0 ; i< n ; i++){

        
        for(int j=0 ; j< n ; j++){
            char ch = 'A'+j;
           cout<<ch<<" ";
           
        }
        cout<<endl;
     }
}