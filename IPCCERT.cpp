#include <stdio.h>

int main(void) {
	long long int n,m,k,i,j,a[10000][10000]={0},sum=0;
	int count=0;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(i=0;i<n;i++)
	{
	    sum=0;
	    for(j=0;j<=k;j++)
	    {
	        scanf("%lld",&a[i][j]);
	        if(j<k)
	        {
	            sum+=a[i][j];
	        }
	    }
	    if(sum>=m && a[i][k]<=10)
	        count++;
	}
	printf("%d\n",count);
	
	return 0;
}

