#include <iostream>
using namespace std;

int main() {
		int tc;
	cin>>tc;
	while(tc--)
	{
	   long long  int n,k;
	    cin>>n>>k;
	    
	    if(k==0)
	    {
	        cout<<"0 "<<n<<endl;
	    }
	    else
	    if(n>=k)
	    {
	        cout<<n/k<<" "<<n%k<<endl;
	    }
	    else
	    {
	        cout<<"0 "<<n<<endl;
	    }
	}
	return 0;
}
