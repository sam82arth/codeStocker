#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int n,w,i,j=0,max=INT_MIN;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>w;
	        if(w+i>=max)
	        {
	            max=w+i;
	            
	        }
	    }
	    cout<<max<<endl;
	       
	}
	return 0;
}
