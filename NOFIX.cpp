#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int i,n,a[100004],c=0,x=0;
	    cin>>n;
	    for(i=1;i<=n;i++)
	    {
	        cin>>a[i];
	        a[i]=i-a[i];
	    }
	    for(i=1;i<=n;i++)
	    {
	        a[i]+=x;
	        if(a[i]==0)
	            x++;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
