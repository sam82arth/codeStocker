#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int a,x=0,n,i,k;
	    scanf("%d%d",&n,&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a);
	        if(a!=1)
	        x++;
	    }
	    if(x<=k)
	    printf("YES\n");
	    else
	    printf("NO\n");
	
	}
	return 0;
}

