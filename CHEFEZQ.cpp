#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{   
	    int flag=1;
	   long long int n,k,i,sum=0,res=0,q=0,x=0;;
	   scanf("%lld%lld",&n,&k);
	   for(i=1;i<=n;i++)
	   {
	       scanf("%lld",&q);
	      if(sum+q>=k)
	      {
	          sum=sum+q-k;
	          res=i;
	      }
	      else
	      {
	          if(x==0)
	          x=i;
	      }
	       
	   }
	   if(i>n)
	    res++;
	  
	 if(x>0)
	 res=x;
	 else
	    {
	        res=res+sum/k;
	    }
	    printf("%lld\n",res);
	   }
	  
	
	return 0;
}

