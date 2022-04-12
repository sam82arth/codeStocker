#include <stdio.h>

int main(void) {
    

	    int d1,v1,d2,v2,p,days=0,i,j=0;
	    scanf("%d%d%d%d%d",&d1,&v1,&d2,&v2,&p);
	    if(d1==d2)
	    {
	       for(i=d1;j<p;i++)
	       {
	           j=j+v1+v2;
	       }
	       days+=i-1;
	    }
	    else
	    if(d1>d2)
	    {
	        for(i=d2;i<d1&&j<p;i++)
	        {
	            j=j+v2;
	        }
	        if(j>=p)
    	        days+=i-1;
    	   else
    	   {
    	       for(i=i;j<p;i++)
    	       {
    	           j=j+v1+v2;
    	       }
    	       days+=i-1;
    	   }
	       
	        
	    }
	    else
	   {
	       for(i=d1;i<d2&&j<p;i++)
	        {
	            j=j+v1;
	        }
	        if(j>=p)
    	        days+=i-1;
    	   else
    	   {
    	       for(i=i;j<p;i++)
    	       {
    	           j=j+v1+v2;
    	       }
    	       days+=i-1;
    	   }
	       
	   }
	    
	    printf("%d\n",days);
	
	return 0;
}

