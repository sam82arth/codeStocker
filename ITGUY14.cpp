#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,i,t,a[100000]={0};
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&t);
	        a[t]=t;
	    }
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",a[i]);
	    }
	    printf("\n");
	}
	return 0;
}

