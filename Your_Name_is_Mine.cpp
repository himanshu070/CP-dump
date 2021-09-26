#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a;
    cin>>a;
    while(a--)
    {
        string s,k;
        cin>>s>>k;
        if(s.length()>k.length())
        swap(s,k);
        int j=0;
        for(int i=0;i<k.length();i++)
        {
            if(s[j]==k[i])
            j++;
        }
        if(s.length()==j)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}