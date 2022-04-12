#include <iostream>
using namespace std;

int main() {
int tc;
	cin>>tc;
	while(tc--)
	{
	    int i,n;
	    cin>>n;
	    if(n<3)
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    if(n%2)
	    {
	    for(i=1;i<=n;i++)
	    {
	        cout<<i<<" ";
	    }
	    }
	    else
	    {
	       cout<<n<<" "<<1<<" ";
	       for(int i = n-1;i>1;i--)
	       cout<<i<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}
