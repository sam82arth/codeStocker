#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    string s;
	    int x=0;
	    cin>>s;
	    for(int i=0;i<s.length();i++)
	    {
	        x+=s[i]-48;
	    }
	    if(x==(s.length()-1)||x==1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
