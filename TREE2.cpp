#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while (tc--)
	{
	   long long int n,i,count=0,a[100000],temp=0;
	   cin>>n;
	   for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	    if(temp<a[i])
	   
	        count++;
	   temp=a[i];
	    }
	   cout<<count<<endl;
	   
	}
	return 0;
}
