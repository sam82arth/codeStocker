#include <bits/stdc++.h>
using namespace std;
long long int m = 998244353 ;
int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,i,ans =0,k=1,x=0;
        cin>>n;
        bool occur[n+1] = {0};
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                x+=(i+1);
             occur[i]=(x%2);
        }
      
        for(i=n-1;i>=0;i--)
        {
            if(occur[i])
            {
                ans = (ans+k%m)%m;
            }
            k= (k*2)%m;
        }
        cout<<ans<<"\n";
        
    }
	return 0;
}
