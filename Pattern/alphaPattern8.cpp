// D
// C D
// B C D
// A B C D

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number:";
    cin>>n;
    
    
     for(int i = 0 ; i< n ; i++){

        char ch = 'D' - i +1;
        for(int j=0 ; j<= i ; j++){
           cout<<ch<<" ";
           ch++;
           
        }
        cout<<endl;
     }
}