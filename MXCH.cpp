
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc,n,i,k;
    cin>>tc;
	while(tc--)
    	{
       cin>>n>>k;
       for(i=n-k;i<=n;i++)
       cout<<i<<" ";
       for(i=1;i<n-k;i++)
       cout<<i<<" " ;
       
        }
        cout<<endl;

	return 0;
}
