#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int x,n,y;
	    cin>>n>>x;
	    y=ceil(x/3.0);
	    if((n-y-((y*3)-x))<0)
	        cout<<"NO\n";
	    else
	    {
	        cout<<"YES\n";
            cout<<y<<" "<<((y*3)-x)<<" "<<(n-y-((y*3)-x))<<"\n";
	    }
	   
	}
	return 0;
}
