#include <iostream>
using namespace std;

int main() {
 int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x=0,a;
        cin>>n;
        while(n--)
        {
           cin>>a;
           x=x^a;
        }
        cout<<x<<endl;
    }
	return 0;
}
