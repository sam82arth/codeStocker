#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int n,i,min=INT_MAX,max=INT_MIN,temp;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>temp;
	        if(temp>max)
	        max=temp;
	        if(temp<min)
	        min=temp;
	    }
	    cout<<(2*(max-min))<<endl;
	}
	return 0;
}
