#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,i,x,c=8;
	    cin>>n;
	    for(i=0;i<n;i++)
	       {
	           cin>>x;
	           if((x+1)%7!=0 && (x%7!=0))
	            c++;
	       }
	       cout<<c<<endl;
	}
	return 0;
}
