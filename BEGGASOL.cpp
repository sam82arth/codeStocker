#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,a[100000],i,sum1=0,sum2=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    sum1=sum2=a[0];
	    for(i=1;i<n;i++)
	    {
	        if(sum1>0)
	        {
	            sum1--;
	            sum1+=a[i];
	            sum2+=a[i];
	        }
	        if(sum1==0)
	            break;
	    }
	    printf("%d\n",sum2);
	  
	    
	}
	return 0;
}

