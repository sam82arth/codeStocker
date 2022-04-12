#include <iostream>
using namespace std;

int main(void) {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,i;
	    long long int k,x,ans=-1;
	    cin>>n>>k;
	    for(i=1;i<=n;i++)
	    {
	        cin>>x;
	        if(k%x==0&&ans<x)
	          ans=x;
	        
	    }
	       cout<<ans<<"\n";
	    }
	 
	
	
	return 0;
}

