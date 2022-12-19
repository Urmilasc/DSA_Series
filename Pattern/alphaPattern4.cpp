// A B C
// B C D
// C D E

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number :";
    cin>>n;
    

     for(int i = 1 ; i<= n ; i++){

        char ch = 'A'+i - 1;
        for(int j=1 ; j<= n ; j++){
           cout<<ch<<" ";
           ch++;
           
        }
        cout<<endl;
     }
}