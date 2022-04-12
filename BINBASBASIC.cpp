#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,k,c=0,i;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    for(i=0;i<n/2;i++)
	    {
	        if(s[i]!=s[n-1-i])
	        {
	            c++;
	        }
	    }
	    if((k>=c)&&((n%2==1)||((k-c)%2==0)))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
