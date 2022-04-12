#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int x;
	    cin>>x;
	    if(x%10==0)
	        cout<<"0\n";
	    else if(x%5==0)
	        cout<<"1\n";
	   else
	        cout<<"-1\n";
	}
	return 0;
}
