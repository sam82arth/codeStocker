#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc,d,n,sum,i,j;
	cin>>tc;
	while(tc--)
	{   sum=0;
	    cin>>d>>n;
	    for(i=0;i<d;i++)
	    {       sum=0;
	        for(j=1;j<=n;j++)
	        {

	            sum=sum+j;

	        }
                n=sum;
	    }
	    cout<<sum<<endl;

	}
	return 0;
}
