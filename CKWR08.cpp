#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int n,k,a[100000],i;
	    cin>>n>>k;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    a[0]=a[0]-k;
	    a[n-1]+=k;
	    cout<<abs(a[n-1]-a[0])<<endl;
	    }
	return 0;
}
