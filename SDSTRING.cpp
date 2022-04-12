#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int i, o=0,z=0;
	    string s;
	    cin>>s;
        for(i=0;i<s.size();i++)
	     {

	        if(s[i]=='0')
	        {
	            z++;
	        }
	        else
	        {
	            o++;
	        }

        }


        if(s.size()%2==0)
        {
	        if(o==z)
	        cout<<"0"<<endl;
	        else
	            if(o==s.size()||z==s.size())
                    cout<<"-1"<<endl;
                else
                    cout<<abs(o-z)/2<<endl;

	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
