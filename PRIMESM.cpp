#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int a,b;
	    cin>>a>>b;
	    if(a==1 || b == 1)
	     cout<<-1<<endl;
	     else
	    if(__gcd(a,b)==1)
	        cout<<1<<endl;
	    else 
	        cout<<0<<endl;
	}
	return 0;
}
