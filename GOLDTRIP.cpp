#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,a[100000],q;
	    int b[100000][2],i,j,s=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    scanf("%d",&q);
	    for(i=0;i<q;i++)
	    {
	        scanf("%d",&b[i][0]);
	        scanf("%d",&b[i][1]);
	    }
	    for(i=0;i<q;i++)
	    {
	        s=0;
	        for(j=b[i][0]-1;j<b[i][1];j++)
	        {
	            s+=a[j];
	        }
	        printf("%d\n",s);
	    }
	    
	}
	return 0;
}

