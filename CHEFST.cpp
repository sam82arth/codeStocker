#include <stdio.h>
#include<math.h>

long long int min(long long int m1,long long int m2)
{
    if(m1>=m2)
    return m2;
    return m1;
}
long long int max(long long int m1,long long int m2)
{
    if(m1>=m2)
    return  m1;
    return m2;
}
int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	  
	    long long int n1,n2,m,i,sum=0;
	         
	    scanf("%lld%lld%lld",&n1,&n2,&m);
	    sum=m*(m+1)/2;
	    if(n1==m&&n2==m)
	        {
	            printf("0\n");
	            continue;
	        }
	   else
	       if(sum<=n1&&sum<=n2)
	       {
	           printf("%lld\n",n1+n2-2*sum);
	           continue;
	       }
	       else
	       {
	        printf("%lld\n",max(n1,n2)-min(n1,n2));
	       }
	   
	    
	}
	return 0;
}

