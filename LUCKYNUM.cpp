#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==7||b==7||c==7)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
	return 0;
}
