#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        float number = pow((0.143*n),n);
        int x = floor(number);
        if(number-x<0.5)
            cout<<x<<endl;
        else cout<<x+1<<endl;
    }
	return 0;
}
