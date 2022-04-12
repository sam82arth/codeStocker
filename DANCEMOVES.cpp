#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<(x-y)<<endl;
        }
        else{
            int z = (abs(y-x));
            if(z%2==0)
                cout<<z/2<<endl;
            else
                cout<<(z/2 +2)<<endl;
        }
    }
	return 0;
}
