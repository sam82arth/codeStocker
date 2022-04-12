#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	int i,j,a[129];
	    a[2]=0;
	    a[1]=0;
	    for(i=2;i<129;i++)
	    {
	        for(j=i-1;j>0;j--)
	        {
	            if(a[i]==a[j])
	            {
	                a[i+1]=i-j;
	                break;
	            }
	            else
	            a[i+1]=0;
	        }
	    }
	
	while(tc--)
	{
	    int n,c=0;
	    scanf("%d",&n);
	    for(i=1;i<=n;i++)
	    {
	        if(a[i]==a[n])
	        c++;
	    }
	    printf("%d\n",c);
	}
	return 0;
}

