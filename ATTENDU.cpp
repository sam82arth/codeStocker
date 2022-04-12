#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int tc;
cin>>tc;
while(tc--)
{
    int n,c=0,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    if(s[i]=='1')
    c++;
    i=c+(120-n);
   
    // cout<<i<<endl;
    if(i<90)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
   
}
	return 0;
}
