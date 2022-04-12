#include <stdio.h>

int main(void) {
	long long int n,l,r,a[1000000],i;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%lld",&a[i]);
	}
	scanf("%lld%lld",&l,&r);
	for(i=l;i<=r;i++)
	{
	    printf("%lld ",a[i]);
	}
	
	return 0;
}

