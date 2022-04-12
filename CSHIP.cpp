#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,k,i,j;
	    long long int a[100000],sum=0,temp=0;
	    scanf("%d%d",&n,&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	   for(i=0;i<k;i++)
	   {
	       sum+=a[i];
	   }
	   temp=sum;
	   for(i=k;i<n;i++)
	   {
	       temp+=a[i]-a[i-k];
	       sum= max(temp,sum);
	   }
	   printf("%lld\n",sum);
	}
	return 0;
}
