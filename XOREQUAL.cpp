#include <iostream>
using namespace std;
   long long int mod = 1e9 + 7;
int main() {
    int n = 100005;
 
    int dp[n+1]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i] = dp[i-1]*2 % mod;
    }
    int tc,x;
    cin>>tc;
    while(tc--)
    {
        cin>>x;
        cout<<dp[x-1]<<endl;
    }
	return 0;
}
