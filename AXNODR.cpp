#include <iostream>
using namespace std;

int main() {
        int tc;
        cin>>tc;
        while(tc--)
        {
            long long int n;
            cin>>n;
            if(n%4==1)
                cout<<n<<"\n";
            else if(n%4==0)
                cout<<n+3<<"\n";
            else
            {
                cout<<"3\n";
            }
            
        }
	return 0;
}
