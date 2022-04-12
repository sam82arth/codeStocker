#include <bits/stdc++.h>
using namespace std;
long long int find(long long int n)
{
    long long int mod = n % 4;
    if (mod == 0)
        return n;
    else if (mod == 1)
        return 1;
    else if (mod == 2)
        return n + 1;
    else if (mod == 3)
        return 0;
}

long long int findxor(long long int l, long long int r)
{
    return (find(l - 1) ^ find(r));
}

int main() {
int tc;
cin>>tc;
while(tc--)
{
    long  long int n,m,k,i,j,xOr=0;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
       
        
       xOr =xOr^findxor(i+1+k,i+m+k);

    }
    cout<<xOr<<endl;
}
	return 0;
}
