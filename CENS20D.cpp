#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    long long int n,a[1001],i,j;
	    long long int t=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	    for(i=0;i<n-1;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if((a[i]&a[j])==a[i])
	            t++;
	        }
	    }
	    printf("%lld\n",t);
	    
	}
	return 0;
}

