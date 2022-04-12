#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,m,a[100000],b[100000],i,sum1=0,sum2=0;
	    cin>>n>>m;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum1+=a[i];
	    }
	    for(i=0;i<m;i++)
	    {
	        cin>>b[i];
	        sum2+=b[i];
	    }
	    if(sum1>sum2)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    int x= min(n,m);
	    i=0;
	     sort(a,a+n);
	      sort(b,b+m,[](int c, int d) {return c > d; });
	   while(i<x&&sum1<=sum2)
	   {
	     sum1= sum1-a[i]+b[i];
	     sum2= sum2-b[i]+a[i];
	   //  cout<<sum1<<endl<<sum2<<endl<<endl;
	     i++;
	   }
	   if(sum1>sum2)
	   {
	       cout<<i<<endl;
	   }
	   else
	   cout<<"-1"<<endl;
	    
	}
	return 0;
}
