#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int n,i,sum=0,x,k;
	    cin>>n>>k;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        sum+=x;
	    }
	    if(sum%k==0)
	    cout<<"0"<<endl;
	    else
	    cout<<"1"<<endl;
	}
	return 0;
}
