#include <bits/stdc++.h>
using namespace std;

int main() {
	 int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x,y,smoke=0;
        cin>>n>>x>>y;
        while(n>=100)
        {
            smoke+=min(x,25*y);
            n-=100;
        }
        if(n>0)
        {
            int car = ceil(n/4.0);
            smoke+=min(x,car*y);
        }
        cout<<smoke<<endl;
    }
	return 0;
}
