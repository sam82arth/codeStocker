#include <stdio.h>

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    int n,k,i,j,a[10000];
    scanf("%d%d",&n,&k);
    if(n==k)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
    }
    else
    if(k<=n/2)
    {
        for(i=1;i<=n;i++)
            a[i]=-i;
        i=2;
        while(k--)
        {
            a[i]=-a[i];
            i=i+2;
        }
         for(i=1;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        
        for(i=1;i<=n;i++)
            a[i]=i;
        i=2;
        j=n-k;
        while(j--)
        {
            a[i]=-a[i];
            i=i+2;
        }
         for(i=1;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    
    
    
    
    printf("\n");
    
}
	return 0;
}

