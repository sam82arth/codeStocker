#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	 long long   int n,i,a[100000],o=0,e=0;
	    scanf("%lld",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	        if(a[i]&1)
	        o++;
	        else
	        e++;
	    }
	    printf("%lld\n",o*e);
	}
	return 0;
}

