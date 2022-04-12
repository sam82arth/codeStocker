#include <iostream>
#include<math.h>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int tc,n,m,k,r;
	cin>>tc;
	while(tc--)
	{
	    cin>>n>>m>>k;
	    int diff=abs(m-n);
	    if(diff>k)
	    r=diff-k;
	    else
	    r=0;
	    cout<<r<<endl;
	}
	return 0;
}
