#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int D;
	    scanf("%d",&D);
	    int d[D],p[D],i,sum=0,j=0;
	    for(i=0;i<D;i++)
	        scanf("%d%d",&d[i],&p[i]);
	   int q;
	   scanf("%d",&q);
	   int dead[q],req[q];
	   for(i=0;i<q;i++)
	        scanf("%d%d",&dead[i],&req[i]);
	   for(i=0;i<q;i++)
	   {
	       sum=0;
	       for(j=0;j<D;j++)
	       {
	            if(dead[i]<d[j])
	                break;
	            else
	                sum+=p[j];
	        }
	       if(sum>=req[i])
	            printf("Go Camp\n");
	       else 
	            printf("Go Sleep\n");
	   }
	    
	}
	return 0;
}
