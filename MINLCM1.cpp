#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long  int x,k;
	    cin>>x>>k;
	    cout<<x*2<<" "<<((x*k)*((x*k)-1))<<endl;
	}
	return 0;
}
