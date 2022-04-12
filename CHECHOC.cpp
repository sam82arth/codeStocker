#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,m,x,y,a;
	    scanf("%d%d%d%d",&n,&m,&x,&y);
	   if(m*n==1)
	   {
	       printf("%d\n",x);
	       continue;
	   }
	    if(2*x<=y)
	  {
	      printf("%d\n",x*n*m);
	      continue;
	  }
	  else
	  {
	      a=(m*n)/2;
	      if(x<=y)
	      {     
	          if(m*n%2==0)
	            printf("%d\n",(m*n*y)/2);
	          else
	             printf("%d\n",(a+1)*x+a*(y-x));
	      }
	      
	      if(x>y)
	      {
	           if(m*n%2==0)
	            printf("%d\n",(m*n*y)/2); 
	           else
	           printf("%d\n",(a+1)*y);
	            
	      }
	  }
	}
	return 0;
}

