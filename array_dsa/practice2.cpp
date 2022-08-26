#include<bits/stdc++.h>
#include <iostream>
using namespace std;

string getMaxOccuringChar(string str)
    {
        int i = 0;
		int count;
		int s = str.size() -1;
		vector<string> ans;
		while(i<=s)
		{
			count=1;
			for(int j =i+1; j<s; j++)
			{
				if(str[i]==str[j])
				{
					count++;
				
				}
				ans.push_back(str[j]);
			}
			i++;
		  }
		  return ans;  
    }
    
    
int main()
{
	string s="aabcdef";
	char c=getMaxOccuringChar(s);
	cout<<"the maxixmum frequnecy is : "<<c<<endl;
	
	
}
