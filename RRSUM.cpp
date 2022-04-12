#include <iostream>
using namespace std;

int main() {
	long long int n,m;
	cin>>n>>m;
	long long int  i,j;
	while(m--)
	{
	    cin>>j;
	    if(j<n+2||j>3*n)
	        cout<<"0\n";
	   else
	    if(j-n<=n+1)
	        cout<<j-n-1<<endl;
	   else
	   {
	       cout<<3*n+1-j<<endl;
	   }
	}

	
	return 0;
}
