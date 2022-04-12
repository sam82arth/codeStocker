#include <iostream>
using namespace std;

int mod = 1e9+7;
int main() {
	 long long int n,m,i,j;
	cin>>n>>m;
	long long int ele[n+1];
	for(i=1;i<=n;i++)
	{
	    cin>>ele[i];
	}
	while(m--)
	{
	    long long int a,b;
	    cin>>a>>b;
	    long long int z=  ele[a];
	    ele[a]=0;
	    for(i=1;i<=2*b;i++)
	    {
	        long long int x,y;
	        if(i&1)
	        {
	            cin>>x;
	        }
	        else
	        {
	            cin>>y;
	            ele[y] = (ele[y]+ (z*x)%mod) %mod;
	        }
	    }
	}
	for( i=1;i<=n;i++)
	cout<<ele[i]<<" ";
	return 0;
}
