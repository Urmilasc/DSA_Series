// A
// B C
// C D E
// D E F G
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number :";
    cin>>n;
    
   cout<<endl<<endl<<"Using for loop : "<<endl;
     for(int i = 1 ; i<= n ; i++){

        char ch = 'A'+i - 1;
        for(int j=1 ; j<= i ; j++){
           cout<<ch<<" ";
           ch++;
         }
        cout<<endl;
     }

   cout<<endl<<endl<<"Using while loop : "<<endl;
   int r= 1;

   while(r <= n){
      int c = 1;
      while(c <= r){
         char ch= 'A' + r + c -2;
         cout<<ch<<" ";
         c++;
      }
      cout<<endl;
      r++;
   }
}